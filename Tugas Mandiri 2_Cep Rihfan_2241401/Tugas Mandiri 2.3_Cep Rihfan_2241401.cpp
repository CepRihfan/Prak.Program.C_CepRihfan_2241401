#include <iostream>
#include <cmath> 
using namespace std;

int main() {
   
    float alas = 4.0; 
    float tinggi = 5.0; 
    float sisi_miring;

    
    sisi_miring = sqrt(pow(alas, 2) + pow(tinggi, 2));

  
    cout << "Sisi miring segitiga dengan alas " << alas << " cm dan tinggi " << tinggi << " cm adalah " << sisi_miring << " cm." << endl;

    return 0;
}
