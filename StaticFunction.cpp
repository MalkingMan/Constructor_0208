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

        
        
}