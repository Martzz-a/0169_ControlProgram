#include <iostream>
using namespace std;

float rata_rata(float a, float b){
    return (a+b)/2;
}

string status_lulus(float r){
    if (r >= 60)
        return "Lolos";
    else
        return "Gagal";
}

int main(){
    float ni1BI, ni1MT, rerata;
    string status;

    cout << "Masukkan nilai Bahasa Inggris = ";
    cin >> ni1BI;
    cout << "Masukkan nilai Matematika = ";
    cin >> ni1MT;
}