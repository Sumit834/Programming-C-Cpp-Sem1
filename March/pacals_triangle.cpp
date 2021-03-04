#include<iostream>
using namespace std;
int main()
{
    int b,d=0,i,j;
    cout<<"ENTER THE NUMBER OF THE ROWS"<<endl;
    int rows;
    cin>>rows;
    for(i=0;i<rows;i++)
    {
        for(b=1;b<rows-i;b++)
        {
            cout<<" ";
        }
        for(j=0;j<=i;j++)
        {
            if(i==0||j==0)
                d=1;
            else

                d=d*(i-j+1)/j;

            cout<<d<<" ";

        }
        cout<<endl;
    }
    return 0;
}
