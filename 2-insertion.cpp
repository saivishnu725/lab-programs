#include<iostream>
#include<iomanip>

using namespace std;

class cs
{
    private:int ele,n,m[100],p;
    public:
        void getdata();
        void insert();
        void display();
};
void cs::getdata()
{
    cout<<"How many elements? ";
    cin>>n;
    cout<<"Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>m[i];
    }
    cout<<"Enter the element to be inserted: ";
    cin>>ele;
    cout<<"Enter the position: ";
    cin>>p;
}
void cs::insert()
{
    if (p>n)
    {
        cout<<"p"<<" is an invalid position.";
        exit(0);
    }   
    for (int i = n-1; i >=p; i--)
    {
        m[i+1] = m[i];
    }
    m[p] = ele;
    n++;
    cout<<ele<<" is successfully inserted."<<endl;
}
void cs::display()
{
    cout<<"The array after the insertion is "<<endl;   
    for (int i = 0; i < n; i++)
    {
        cout<<setw(4)<<m[i];
    }   
}
int main()
{
    cs bh;
    bh.getdata();
    bh.insert();
    bh.display();
    cout<<endl;
    return 0;
}