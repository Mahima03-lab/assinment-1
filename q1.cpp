#include<iostream>
int main()
{
    int days,year,r1,week,day;
    std::cout<<"Enter days=";
    std::cin>>days;
    year=days/365;
    r1=days%365;
    week=r1/7;
    day=r1%7;
    std::cout<<"Years="<<year<<"\nWeeks="<<week<<"\nDays="<<day;
    return 0;
}
