#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,t=0,idx=-1;
    cout<<"Enter number of processes: ";
    cin>>n;
    cout<<"Enter number of blocks: ";
    cin>>k;
    vector<int> p(n),b(k),allocate(n,-1);

    for(i=0;i<n;i++)
        {
            cout<<"Enter process size "<<i+1<<" :";
            cin>>p[i];
        }

    for(i=0;i<k;i++)
        {
            cout<<"Enter block size "<<i+1<<" :";
            cin>>b[i];
        }
    for(i=0;i<n;i++)
    {
        idx=-1;
        for(j=0;j<k;j++)
        {
            if(b[j]>=p[i])
            {
                if(idx==-1)
                    idx=j;
                else if(b[j]>b[idx])
                    idx=j;
            }
        }

        if(idx!=-1)
        {
             allocate[i]=idx+1;
            b[idx]-=p[i];
        }

    }
    cout<<"Process No.\t\tProcess Size\t\tBlock No.\n";
    for(i=0;i<n;i++)
    {
       if(allocate[i]==-1)
        cout<<i+1<<"\t\t\t"<<p[i]<<"\t\t\tNo memory found"<<endl;
       else
       cout<<i+1<<"\t\t\t"<<p[i]<<"\t\t\t"<<allocate[i]<<endl;

    }
}


