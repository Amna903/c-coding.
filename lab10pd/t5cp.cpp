#include <iostream>
using namespace std;

int main() {
    int packages[10];
    cout<<"Enter the weights of the 10 packages: "<<endl;
    for (int i = 0; i < 10; i++) {
        cin>>packages[i];
    }
    int n = 10;

 
    for (int i = 0; i < n-1; i++) {     
        for (int j = 0; j < n-i-1; j++) { 
            if (packages[j] > packages[j+1]) {
                int temp = packages[j];
                packages[j] = packages[j+1];
                packages[j+1] = temp;
            }
        }
    }

    cout << "Sorted array in ascending order: [";
    for (int i = 0; i < n-1; i++) {
        cout << packages[i] << ", ";
    }
    cout<<packages[n-1]<<"]";

    return 0;
}
