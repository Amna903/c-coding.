#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout << "Enter the count of cargo for transportation: ";
    int cargo;
    cin >> cargo;
    int ton;
    double sum = 0, totalCost = 0;
    double minibus = 0, truck = 0, train = 0;

    for(int i = 1; i <= cargo; i++)
    {
        cout << "Enter the tonnage of cargo " << i << ": ";
        cin >> ton;
        sum += ton;

        if(ton <= 3)
        {
            totalCost += ton * 200;
            minibus += ton;
        }
        else if(ton <= 11)
        {
            totalCost += ton * 175;
            truck += ton;
        }
        else
        {
            totalCost += ton * 120;
            train += ton;
        }
    }

    double averageCost = totalCost / sum;

    cout << fixed << setprecision(2);
    cout <<  averageCost << endl;
    cout <<  (minibus/ sum) * 100 << "%" << endl;
    cout <<  (truck / sum) * 100 << "%" << endl;
    cout << (train / sum) * 100 << "%" << endl;

    return 0;
}
