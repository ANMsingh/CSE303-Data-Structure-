#include<iostream>
using namespace std;
int main()
{
    int i,k,n,temp,j,ar[100];
    cout<<"Enter number of elements to be sorted:";
	cin>>n;
	cout<<"Enter "<<n<<" elements:"<<endl;
    
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    
    for(k=0;k<n-1;k++)
    {
        for(i=0;i<n-k-1;i++) //sorting
        {
            if(ar[i]>ar[i+1])
            {
                temp=ar[i];
                ar[i]=ar[i+1];
                ar[i+1]=temp;
            }
        }
    }
    
    for(i=0;i<n;i++) //sorted
    {
    	cout<<ar[i]<<" ";
	}
    return 0;
}
