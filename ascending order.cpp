#include<iostream>
using namespace std;
template<typename t>
void arr(t a[],int n)
{
    int i,j,temp;
    for(i=0;i<=n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<endl<<"sorted arrary:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" "<<endl;
    }
}
int main()
{
    int a[]={4,8,6,2};
    char ch[]={'d','a','k'};
    float f[]={4.5,8.5,6.5,2.5};
    char str[]={"random"};
    arr(a,4);
    arr(ch,3);
    arr(f,4);
    arr(str,6);
    return 0;
}