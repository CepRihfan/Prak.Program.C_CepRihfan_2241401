#include <iostream>
#include <cmath> 
using namespace std;

int main() {
   
    float diameter = 15.0; 
    float jari_jari = diameter / 2.0;
    float volume;

   
    volume = (4.0 / 3.0) * M_PI * pow(jari_jari, 3);

   
    cout << "Volume bola dengan diameter " << diameter << " cm adalah " << volume << " cm^3." << endl;

    return 0;
}
