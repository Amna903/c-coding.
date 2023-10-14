#include <iostream>
using namespace std;
float perimeter(char shape, float num);
main()
{
    float num;
    char shape;
    cout<<"Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin>>shape;
    cout<<"Enter the value: ";
    cin>>num;
float perameter= perimeter( shape,  num);
cout<<"The perimeter is: "<<perameter;

}

float perimeter(char shape, float num){
   float p;
    if(shape=='s')
{
    p=4*num;
}
    if(shape=='c')
    {
        p=6.28*num;
    }
    if(shape=='t')
    {
        p=3*num;
    }
    if(shape=='h')
    {
        p=6*num;
    }
    return p;
}