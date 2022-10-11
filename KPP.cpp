// Nama : Jonathan Oktaviano Frizzy
// Departemen : Teknik Elektro Otomasi
// NRP : 2040221060

#include <iostream>
#include <math.h>
using namespace std;

int main () {
    // V0 = V awal
    // X = Jarak 
    // G = Gravitasi 
    // Theta = Derajat Kemiringan 
    int V0, X, G; 
    int k = 2;
    int x = 1;
    char Theta;
    double result ;
    result = sin(x);

    cout<<"input V0 = "<< endl;
    cin>>V0;
    cout<<"input X = "<< endl;
    cin>>X;
    cout<<"Input G =  "<<endl;
    cin>>G;
    cout<<"Input Theta = "<<endl;
    cin>>Theta;

    cout<<V0*V0*sin(x)*k*Theta/G<<endl;
    cout<<"Your Number Was Processing"<<endl;
    return 0;
}