//concept of static data
#include<iostream>
using namespace std;
class item
{
    static int count; //variable lai static banako
    float price;
    public: void input(float a)  //input vanne function banako
    {
//         float a;
        price=a;
        count ++;
    }
    void show()  //another function named show
    {
        cout<<"count="<<count<<endl; 
    }
};
int item::count;  //agi banako static data ko scope deko
int main()
{
    item x,y,z;  //item type ko objects banako
    x.show();  //x object le show function lai call gareko
//    y.show();
//    z.show();

    x.input(2.1);  //x object le input function lai call garera a ma 2.1 value pass gareko
//    y.input(3.5);
//    z.input(6.7);

    cout<<"after reading data"<<endl;

    x.show(); // x object le show function lai feri call gareko
//    y.show();
//    z.show();

return 0;
}

//note that static variable lai declare garda jahile ni initial value 0 hunxa
