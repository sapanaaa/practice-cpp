//counting no of vowels in a string
#include<iostream>
using namespace std;
int main()
{
    char str[13]="I love Nepal"; //string input gareko
    int i=0, count=0; //count ko value initialize gareko
    while(i<12)  //loop starts
    {
        if (str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' ||
        str[i]=='O' || str[i]=='o' || str[i]=='U' || str[i]=='u')  //if i ko value blah blah vayo vane..
        {
            count++; //count ko value 1 le badhau
        }
        i++;  //come out of loop and i ko value ni 1 le badhau
    }
    cout<<"number of vowels="<<count; //finally count ko value kati samma pugyo
    return 0;

}
