#include <iostream>
using namespace std;
void sticker(int side);
main()
{
	int side;
	cout<< "Enter the side length of the Rubik's Cube: ";
	cin>>side;
	sticker(side);
	cout<<endl;
	system ("pause");
	return 0;

}

void sticker(int side)
{
	int sticker;
	sticker=side*(side*6);
	cout<< "Number of stickers needed: "<<sticker;
}