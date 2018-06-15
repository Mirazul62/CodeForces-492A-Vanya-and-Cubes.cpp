#include<bits/stdc++.h>
using namespace std;
int fact(int i)
{
    if(i==1)
        return 1;
    else
        return i+fact(i-1);
}
int main()
{
    long long int n,a=0,i,ans=0;
    cin>>n;
    for(i=1; ;i++)
    {
        fact(i);

        a+=fact(i);
        //cout<<a<<endl;
      //  ans++;
        if(a>n)
            break;
        ans++;
    }
    cout<<ans;

}
