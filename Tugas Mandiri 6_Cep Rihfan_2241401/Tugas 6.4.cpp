#include <iostream>
using namespace std;

int main() {
    const int kecepatan = 2; 
    const int waktu = 100;  

    
    int jarak = kecepatan * waktu;

    
    cout << "Jarak yang ditempuh setelah " << waktu 
         << " detik adalah " << jarak << " meter." << endl;

    return 0;
}

