// Let Us Understand Computer (HackerEarth)

#include<iostream>
using namespace std;

int bin(int n)
{
    int c = 0;
    int base = 0;
    while(n)
    {
        int d = n % 2;
        base += d*10;
        n /= 2;
        c++;
    }
    return c;
}

int main()
{
    int t;
    long x;
    cin>>t;
    for(int i = 0; i < t; i++)
    {
        cin>>x;
        int flag = 0;
        for(int d = 1; d <= x; d++)
        {
            if(bin(d) >= bin(int(x/d)))
                flag++;
        }
        cout<<flag<<"\n";
    }
    return 0;
}