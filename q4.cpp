#include <iostream>

int main()
{
  int decimal_num, c, result;

  std::cout<<"Enter an integer in decimal number system\n";
 std::cin>> decimal_num;

  for (c = 31; c >= 0; c--)
  {
    result = decimal_num >> c;
    if (result & 1)
      std::cout<<"1";
    else
      std::cout<<"0";
  }

 std::cout<<"\n";
//Negative numbers are stored in 2's compliment
  return 0;
}
