#include <iostream>
using namespace std;
class buku{
    string judul;
    public:
    buku setJudul(string judul){
        this->judul = judul;
        return *this; //chain function
    }
    string getJudul(){
        return this->judul;
    }
};

int  main()
{
    buku bukunya;
    //chain function calls
    cout<<bukunya.SetJudul("Matematika").getJudul();
    return 0;
}