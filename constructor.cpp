#include <iostream>
using namespace std;

class mahasiswa{
    public:
    mahasiswa(); //constructor mahasiswa
};

mahasiswa::mahasiswa(){
    cout<<"Constructor Terpanggil"<<endl;
};

int main(){
    mahasiswa mhs;
}
