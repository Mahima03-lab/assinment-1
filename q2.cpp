#include<iostream>
int main()
{
    float x,t1,t2,t3;
    std::cout<<"Enter x=";
    std::cin>>x;
    t1=x+(1/x);
    t2=x+(1/t1);
    t3=x+(1/t2);
    std::cout<<"Required result is:"<<t3;
    return 0;
}
