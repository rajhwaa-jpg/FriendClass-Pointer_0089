#include <iostream>
using namespace std;
class mahasiswa{
    public: 
    int nim;
    void showNim(){
        cout << "No Induk = " << nim << endl;
    }
};

int main (){
    mahasiswa mhs{1}; //objek mhs 
    mhs.showNim(); //Member Access Operator

    mahasiswa &refMhs = mhs; //pointer refence refMhs
    refMhs.nim = 2; // Member access Operator
    refMhs.showNim(); 

   
}
