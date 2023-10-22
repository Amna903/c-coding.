#include <iostream>
using namespace std;
int dots(int num);
main()
{
    int num;
    cout << "Enter number of Triangle: ";
    cin >> num;
    int ans = dots(num);
    cout << "Dots in the Triangle: " << ans;
}
int dots(int num)
{
    int dot = 0;
    int sequence = 1;
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum = dot + sequence;
        dot = sum;
        sequence++;
    }
    return sum;
}