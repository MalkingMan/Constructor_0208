#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
    private:
    static int niml

    public:
        int id;
        string nama;

        void setID();
        void printAll();

        static void setNim(int pNim) { nim = pNim; }
        static int getNim() { return nim; }

        mahasiswa(string pnama)
        {
            nama = pnama;
            setID();
        }
        
};

void mahasiswa::setID()
{
    id = ++nim;
}

void mahasiswa::printAll()
{
    cout << "ID =" << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main()
{
    mahasiswa mhs1("Lionel Pessi");
    mahasiswa mhs2("Lewangoalski");

    mahasiswa::setNim(208); // Mengakses nim melalui static member function "setNim"
    mahasiswa mhs3("Pele");
    mahasiswa mhs4("Benzemaaaaaaaaaaaaa");

    mhs1.printAll();

    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();
}

cout << "akses dari luar object =" << mahasiswa::getNim()