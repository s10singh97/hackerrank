#include<iostream>
using namespace std;

int main()
{
    int z;
    cin>>z;
    string b;
    cin>>b;
    // string sub = "hackerearth";
    int h = 0, a = 0, c = 0, k = 0, e = 0, r = 0, t = 0;
    for(int i = 0; i < z; i++)
    {
        if(b[i] == 'h')
            h++;
        if(b[i] == 'a')
            a++;
        if(b[i] == 'c')
            c++;
        if(b[i] == 'k')
            k++;
        if(b[i] == 'e')
            e++;
        if(b[i] == 'r')
            r++;
        if(b[i] == 't')
            t++;
    }
    // cout<<h<<" "<<a<<" "<<c<<" "<<k<<" "<<e<<" "<<r<<" "<<t<<"\n";
    // int flag = 0;
    // if(h % 2 != 0)
    //     flag = 1;
    // if(a % 2 != 0)
    //     flag = 1;
    // if(c % 1 != 0)
    //     flag = 1;
    // if(k % 1 != 0)
    //     flag = 1;
    // if(e % 2 != 0)
    //     flag = 1;
    // if(r % 2 != 0)
    //     flag = 1;
    // if(t % 1 != 0)
    //     flag = 1;
    // if(flag == 1)
    //     cout<<0;
    // else
    // {
    //     if(a >= 2*c && e <= 2*k && r >= 2*t)
    //         cout<<"\n"<<c<<"\n";
    // }
    if(a >= 2*c && e <= 2*k && r >= 2*t)
        cout<<c;
    else
    {
        cout<<0;
    }
    
    return 0;
}