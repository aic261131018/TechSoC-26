#include <iostream>
#include <vector>
using namespace std;

int main(){
    int X=0; int Y=0;
    cout << "Please enter the maximum storage capacity of this port." << endl;
    cin >> X;
    cout << "Please enter the number of containers available at the port." << endl;
    cout << "Note that the number of containers must be greater than 1 and less than 1000." <<endl;
    cin >> Y;
    
    if (Y<1 || Y>1000)
    return 1;
    
     vector <double> W(Y);
     for (size_t i = 0; i < Y; i++) {
        cin >> W[i];
    }
    
     double Sum=0;
     for (size_t i = 0; i < Y; i++) {
    
        Sum =+ Sum + W[i];
     }
    double AverageWeight=0;
    AverageWeight = Sum/Y;

    double maximum=0;
    double minimum=W[1];
    for (size_t i = 0; i < Y; i++) {
        if (W[i] > maximum)
        maximum = W[i];
    }
    for (size_t i = 0; i < Y; i++) {
        if (W[i]<minimum)
        minimum = W[i];
    }
    
    cout << "Total Shipment Weight:" << Sum << endl;
    cout << "Average Container Weight:" << AverageWeight << endl;
    cout << "Heaviest Container:" << maximum << endl;
    cout << "Lightest Container" << minimum <<endl;
    if ( Sum >=200)
    cout << "Classification:Heavy" << endl;
    else if (Sum <200)
    cout << "Classification:Light" << endl;
    cout << "Port capacity:" << X << endl;
    if (Sum<=X)
    cout << "Status: Shipment can be unloaded." << endl;
    else if (Sum>X)
    cout << "Status :Shipment exceeds port capacity." << endl;
    
}