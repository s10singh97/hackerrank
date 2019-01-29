// Let Us Understand Computer (HackerEarth)

#include<iostream>
#include<math.h>
using namespace std;

// int bin(int n)
// {
//     int c = 0;
//     // while(n)
//     // {
//     //     int d = n % 2;
//     //     n /= 2;
//     //     c++;
//     // }
//     c = int(ceil(log2(n)));
//     return c;
// }

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
            if(int(ceil(log2(d))) >= int(ceil(log2(int(x/d)))))
                flag++;
        }
        cout<<flag<<"\n";
    }
    return 0;
}