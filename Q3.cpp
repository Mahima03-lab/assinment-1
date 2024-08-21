#include<iostream>
int main()
{
    float x,y;
    std::cout<<"Enter y=";
    std::cin>>y;
    x=y-20*6/9;
    std::cout<<x<<"\n"<<"Not expected result!!";
    std::cout<<"\nEnter y=";
    std::cin>>y;
    x=y-20.0*6.0/9.0;
    std::cout<<"Correct x="<<x;
    return 0;
}
