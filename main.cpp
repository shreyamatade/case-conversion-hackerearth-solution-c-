#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string a;
        cin>>a;

        //making only first letter small
        if(int(a[0])>=65 && int(a[0])<=90)
        {
            a[0]=char(int(a[0])+32);
        }

        //checking after first letter
        for(long long int i=1;i<a.length();i++)
        {
            if(int(a[i])>=65 && int(a[i])<=90)
            {
                string s,u;
                for(long long int j=0;j<i;j++)
                {
                    s=s+a[j];
                    cout<<"s now is:"<<s<<"\n";
                }
                u=a[i];
                u[0]=char(int(u[0])+32);
                cout<<"u[0] is:"<<u[0]<<endl;

                for(long long int j=i+1;j<a.length();j++)
                {
                    u=u+a[j];
                    cout<<"u is :"<<u<<endl;
                }
                cout<<"final a:"<<a<<endl;
                cout<<"final _:"<<"_"<<endl;
                cout<<"final u:"<<u<<endl;
                a=s+"_"+u;
            }
        }

       cout<<a<<"\n";
    }
}
