#include <iostream>
#include <iomanip> 
using namespace std;
main()
{
    cout << "Enter numbers count: ";
    float num, number;
    cin >> num;
    float p1, p2, p3, p4, p5;
     p1 = 0;
        p2 = 0;
        p3 = 0;
        p4 = 0;
        p5 = 0;
    for (int i = 1; i <= num; i++)
    {
        cout << "Enter a number: ";
        cin >> number;

       

        if (number >= 1 && number < 200)
            p1++;
        else if (number >= 200 && number < 400)
            p2++;
        else if (number >= 400 && number < 600)
            p3++;
        else if (number >= 600 && number < 800)
            p4++;
        else if (number >= 800)
            p5++;
    }
    p1 = (p1 / num) * 100;
    p2 = (p2 / num) * 100;
    p3 = (p3 / num) * 100;
    p4 = (p4 / num) * 100;
    p5 = (p5 / num) * 100;
 cout << fixed << setprecision(2);
    cout << p1 << "%\n";
    cout << p2 << "%\n";
    cout << p3 << "%\n";
    cout << p4 << "%\n";
    cout << p5 << "%\n";

    return 0;
}
