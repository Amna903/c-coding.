#include <iostream>
using namespace std;
void count(int word, string array[]);
main()
{
    int word;
    cout << "Enter how many words you want to enter: ";
    cin >> word;
    string array[word];
   count(word, array);
    
}
void count(int word, string array[])
{
    int count = 0;
    for (int i = 0; i < word; i++)
    {
        cout << "Enter word " << i + 1 << ": ";
        cin >> array[i];
    }
    char find;
    cout << "Enter the letter you want to count: ";
    cin >> find;
  
    for (int i = 0; i < word; i++)
    {

        int length = 0;
        while (array[i][length] != '\0')
        {
            if (array[i][length] == find)
            {
                count++;
            }
            length++;
        }
    }
     cout<<find<<" shows up "<<count<<" times in the data.";

}
