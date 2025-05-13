#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class bangunDatar;

class PersegiPanjang
{
    public:
        void inputData(BangunDatar &bd);
        void outputData(BangunDatar &bd);
};

class BangunDatar
{
    private:
        float panjang;
        float lebar;
        float hitungLuas(){
            return panjang * lebar;
        };
        float hitungKeliling(){
            return 2 * (panjang + lebar);
        };
    public:
        friend void PersegiPanjang::inputData(BangunDatar &bd);
        friend void PersegiPanjang::outputData(BangunDatar &bd);
};

void PersegiPanjang::inputData(BangunDatar &bd)
{
    cout << "Masukkan panjang : ";
    cin >> bd.panjang;
    cout << "Masukkan lebar : ";
    cin >> bd.lebar;
}

void PersegiPanjang::outputData(BangunDatar &bd)
{
    cout << "Luas : " << bd.hitungLuas() << endl;
    cout << "Keliling : " << bd.hitungKeliling() << endl;
};
        

int main()
{
   PersegiPanjang pP;
   BangunDatar bD;
   pP.inputData(bD);
   pP.outputData(bD);
};
