#include<iostream>
int main()
{
    float a,k,b,c,d;
    std::cout<<"ENTER THE NUMBER a=";
    std::cin>>a;
    std::cout<<"ENTER THE PLACE TO BE TRUNCATED UPTO, k=";
    std::cin>>k;
    int e;
    b=a+(0.5/k);
    c=b*k;
    e=c;
    d=e/k;
    std::cout<<"TRUNCATED NUMBER IS:"<<d;
    return 0;
}
