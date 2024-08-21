#include<iostream>
int main()
{
    char vowel1,vowel2,vowel3,vowel4,vowel5,capVowel1,capVowel2,capVowel3,capVowel4,capVowel5;
    vowel1='a';
    vowel2='e';
    vowel3='i';
    vowel4='o';
    vowel5='u';
    std::cout<<"vowel2-vowel1="<<vowel2-vowel1<<"\nvowel5-vowel2="<<vowel5-vowel2;//valid xpressions
    capVowel1='A';
    capVowel2='E';
    capVowel3='I';
    capVowel4='O';
    capVowel5='U';
    std::cout<<"\ncapVowel2-capVowel1="<<capVowel2-capVowel1<<"\ncapVowel5-capVowel2="<<capVowel5-capVowel2;//valid expressions
    int a,b;
    a=(int)vowel2-vowel1;
    b=(int)capVowel2-capVowel1;
    if(a==b)
        std::cout<<"\nvowel2-vowel1 and capVowel2-capVowel1 has the same value!!";
    else
        std::cout<<"\nvowel2-vowel1 and capVowel2-capVowel1 don't have the same value!!";
    return 0;
    /*vowel2-vowel1 and capVowel2-capVowel has the same value as difference of ascii value in both the cases are same .
    Here ASCII  value of vowel2 (e)= 101,vowel1(a)=97,capVowel2(E)=69,capVowel1(A)=65,thus 101-97=4=69-65*/
}
