#include <iostream>
#include <cmath>
 
using namespace std;

class BelahKetupat;
 
class LayangLayang {
private:
    double d1, d2;
    double s1, s2;
 
public:
    friend class BelahKetupat;
 
    void inputData() {
        cout << "===== Input Data Layang-Layang =====" << endl;
        cout << "Masukkan diagonal 1 (d1) : ";
        cin  >> d1;
        cout << "Masukkan diagonal 2 (d2) : ";
        cin  >> d2;
        cout << "Masukkan sisi 1 (s1)     : ";
        cin  >> s1;
        cout << "Masukkan sisi 2 (s2)     : ";
        cin  >> s2;
    }
 
    double hitungLuas() {
        return 0.5 * d1 * d2;
    }
 
    double hitungKeliling() {
        return 2 * (s1 + s2);
    }
 
    void tampilData() {
        cout << "===== Output Data Layang-Layang =====" << endl;
        cout << "Diagonal 1  : " << d1                << endl;
        cout << "Diagonal 2  : " << d2                << endl;
        cout << "Sisi 1      : " << s1                << endl;
        cout << "Sisi 2      : " << s2                << endl;
        cout << "Luas        : " << hitungLuas()      << endl;
        cout << "Keliling    : " << hitungKeliling()  << endl;
    }
};
 
class BelahKetupat {
private:
    double d1, d2;   
    double s;        
 
public:
    void inputData() {
        cout << "===== Input Data Belah Ketupat =====" << endl;
        cout << "Masukkan diagonal 1 (d1) : ";
        cin  >> d1;
        cout << "Masukkan diagonal 2 (d2) : ";
        cin  >> d2;
        cout << "Masukkan sisi (s)        : ";
        cin  >> s;
    }
 
    double hitungLuas() {
        return 0.5 * d1 * d2;
    }
 
    