// code for finding volume of cuboid,sphere and cylinder using the concept of function overloading
#include<iostream>
using namespace std;
float volume(int l, int b, int h)  //#1 integer type ko teen ota parameters vako function declare gareko
{
    return(l*b*h);  //teo function le l*b*h value return garxa
}
float volume(int r)  //#2 integer type ko euta parameter vako function
{
    return(4/3*3.14*r*r*r);  //function le blah blah value return garxa
}
float volume(int r1, float h)  //#3 different type ko parameters vako function blah blah
{
    return(3.14*r1*r1*h); //blah blah blah
}
int main()
{
    int m,n,o;  //blah blah
    float p;
    cin>>m>>n>>o>>p; //input blah blah
    cout<<"volume of cuboid is="<<volume(m,n,o);  //volume(common) function ma teenta variables pass garyo so obv #1 wala function call hunxa
    cout<<"volume of sphere is="<<volume(m);  //aba eutai value pass garyo so #2 wala call hunxa
    cout<<"volume of cylinder is="<<volume(m,p);  //we all know kun wala call hunxa 
    return 0;
}
//so this was all about function overloading (;
