#include<iostream>
using namespace std ;

int isbinarysearch( int [] , int ,int , int );

int main()
{
    int a,i,j;
    cout<<"ENTER THE NUMBER OF ELEMENTS THAT YOU WANT TO KEEP IN THE ARRAY"<<endl;
    cin>>a;

    int arr[a];

    cout<<"ENTER THE ELELMENTS THAT YOU WANT TO KEEP IN THE ARRAY"<<endl;

    for(i=0;i<a;i++)
    {
        cin>>arr[i];
    }

    //PERFORMING THE SELECTION SORT

    int t=0;
    for(i=0;i<a-1;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if(arr[i]>arr[j])
            {
              t=arr[i];
              arr[i]=arr[j];
              arr[j]=t;
            }
        }
    }

    // PRINT THE ARRAY ENTERED BY YOU IN THE SORTED MANNER

    for(i=0;i<a;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

    int p;
    int num;
    cout<<"ENTER THE NUMBER TO BE SEARCHED"<<endl;
    cin>>num;
p= isbinarysearch(arr,0,a-1,num);
if(p)
    cout<<"FOUND"<<endl;
else
    cout<<"NOT FOUND"<<endl;
return 0;
}

int isbinarysearch( int arr[],int l,int r,int num)
{
    int mid=0;
if (l<=r)
{
    mid=(l+r)/2;
    //CHECKING IF THE MID NUMBER AT A PARTICULAR INTERVAL.
    //WHEATHER THE NUMBER IS PRESENT THERE OR NOT.
    if (arr[mid]==num)
        return 1;
    //PERFORMING CHECK TO FIND OUT WHEATHER THE NUMBER
    //TO BE SEARCHED IS LESS THAN THE MIDDLE ELEMENT OF A
    //PARTICULAR INTERVAL OR NOT
    else if (arr[mid]>num)
        return isbinarysearch(arr,l,mid-1,num);
    //PERFFORMING A CHECK TO FIND OUT WHEATHER THE NUMBER
    //TO BE SEARCHED IS GREATER THAN THE MIDDLE ELEMENT OF A
    //PARTICULAR INTERVAL OR NOT
    else
        return isbinarysearch
                (arr,mid+1,r,num);
}
    return 0;
}
