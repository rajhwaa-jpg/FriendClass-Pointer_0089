#include <iostream>
using namespace std;

// ================= CLASS LAYANG LAYANG =================
class LayangLayang
{
private:
    float d1, d2;      // diagonal
    float s1, s2;      // sisi

public:
    // method input
    void input()
    {
        cout << "=== DATA LAYANG-LAYANG ===" << endl;
        cout << "Masukkan diagonal 1 : ";
        cin >> d1;
        cout << "Masukkan diagonal 2 : ";
        cin >> d2;
        cout << "Masukkan sisi 1     : ";
        cin >> s1;
        cout << "Masukkan sisi 2     : ";
        cin >> s2;
    }

    // method luas
    float luas()
    {
        return 0.5 * d1 * d2;
    }

    // friend function keliling
    friend float kelilingLayang(LayangLayang);

    // method output
    void output()
    {
        cout << "Luas Layang-Layang      = " << luas() << endl;
        cout << "Keliling Layang-Layang  = " << kelilingLayang(*this) << endl;
    }
};

// friend function
float kelilingLayang(LayangLayang x)
{
    return 2 * (x.s1 + x.s2);
}


// ================= CLASS BELAH KETUPAT =================
class BelahKetupat
{
private:
    float d1, d2;
    float sisi;

public:
    // method input
    void input()
    {
        cout << "\n=== DATA BELAH KETUPAT ===" << endl;
        cout << "Masukkan diagonal 1 : ";
        cin >> d1;
        cout << "Masukkan diagonal 2 : ";
        cin >> d2;
        cout << "Masukkan sisi       : ";
        cin >> sisi;
    }

    // method luas
    float luas()
    {
        return 0.5 * d1 * d2;
    }

    // method keliling
    float keliling()
    {
        return 4 * sisi;
    }

    // method output
    void output()
    {
        cout << "Luas Belah Ketupat      = " << luas() << endl;
        cout << "Keliling Belah Ketupat  = " << keliling() << endl;
    }
};


// ================= MAIN PROGRAM =================
int main()
{
    LayangLayang ll;
    BelahKetupat bk;

    ll.input();
    ll.output();

    bk.input();
    bk.output();

    return 0;
}
