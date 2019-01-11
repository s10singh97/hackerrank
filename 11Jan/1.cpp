// Substring Check

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    cin>>a>>b;
    int c[10], d[5];
    int f[] = {0,0,0,0,0};
    for(int i = 0; i < 1; i++)
    {
        cin>>a>>b;
        // int aa = a;
        int jj = 9;
        while(jj != 0)
        {
            int e = a % 10;
            c[jj] = e;
            jj--;
            a = a / 10;
        }
        // int bb = b;
        jj = 4;
        while(jj != 0)
        {
            int e = a % 10;
            d[jj] = e;
            jj--;
            a = a / 10;
        }
    }
    for(int i = 0; i < 10; i++)
    {
        cout<<c[i];
    }
    cout<<"\n";
    for(int i = 0; i < 5; i++)
    {
        cout<<d[i];
    }
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(c[i] == d[j])
            {
                f[j] = 1;
                i++;
                continue;
            }
            else
                break;
        }
    }
    for(int i = 0; i < 5; i++)
    {
        if(f[i] == 0)
            cout<<0;
        else
            cout<<1;
    }
    return 0;
}
