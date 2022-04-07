#include <iostream>

using namespace std;

int main()
{
    int base, height;
    float area;
    cout<<"enter the base of the triangle here:";
    cin>>base;

    cout<<"enter height of triangle:";
    cin>>height;

    area = 0.5*base*height;

    cout<<"Area of triangle for given base and height is:"<<area<<"units";
    return 0;
}
