#include<iostream>
int main()
{
   long double a,k,b,c,d;
    std::cout<<"ENTER THE NUMBER a=";
    std::cin>>a;
    std::cout<<"ENTER THE PLACE TO BE TRUNCATED UPTO, k=";
    std::cin>>k;
    long int e;
    b=a+(0.5f/k);
    c=b*k;
    e=(long int)c;
    d=(long double)e/k;
    std::cout<<std::fixed;
    std::cout<<"TRUNCATED NUMBER IS:"<<d;
    return 0;
}
