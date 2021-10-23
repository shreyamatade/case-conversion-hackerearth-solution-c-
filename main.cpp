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

                }
                u=a[i];
                u[0]=char(int(u[0])+32);


                for(long long int j=i+1;j<a.length();j++)
                {
                    u=u+a[j];

                }

                a=s+"_"+u;
            }
        }

       cout<<a<<"\n";
    }
}
