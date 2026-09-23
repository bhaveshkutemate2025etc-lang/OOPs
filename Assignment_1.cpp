#include<iostream>
using namespace std;
int fact(int p)
{
    int result=1,i;
    for(i=p;i>1;i--)
    {
        result=result*i;
    }
   
    return result;
}
int nCr(int k,int j)
{
    return fact(k)/(fact(j)*fact(k-j));
}
void printpascal(int l)
{
    for(int i=0; i<l ; i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"\t"<<nCr(i,j);
        }
        cout<<endl;
    }
}
int main()
{
   
    int n,r,res;
    cout<<"Enter row number :";
    cin>>r;
    printpascal(r);
    return 0;
}
