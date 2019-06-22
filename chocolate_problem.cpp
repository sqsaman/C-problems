#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int m,p,i,res;
        cin>>m;
        int b[n];
        i=0;
        p=i+(m-1);
       // cout<<endl;
        // for(int k=0;k<n;k++)
          //  cout<<a[k]<<" ";
        //cout<<endl;
        while(p<n)
        {
            b[i]=a[p]-a[i];
            i++;
            p=i+(m-1);
        }
        res=b[0];
       // for(int k=0;k<i;k++)
         //   cout<<b[k]<<" ";
        for(int k=1;k<i;k++)
        {
          //  cout<<b[k]<<" ";
            if(b[k]<res)
                res=b[k];
        }
        cout<<res;
        cout<<endl;
        t--;
    }
    return 0;
}
