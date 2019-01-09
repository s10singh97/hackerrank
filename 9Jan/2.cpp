// Prime generator

#include<iostream>
using namespace std;

// void prime(int a[])
// {
//     for(int i = a[0]; i <= a[1]; i++)
//     {
//         int c = 0;
//         for(int j = 1; j < i; j++)
//         {
//             if(i % j == 0)
//                 c++;
//         }
//         if(c == 1)
//             cout<<i<<"\n";
//     }
// }

int main(int argc, char const *argv[])
{
    int t, a[2];
    cin>>t;
    for(int i = 0; i < t; i++)
    {
        for(int j = 0; j < 2; j++)
            cin>>a[j];
        for(int i = a[0]; i <= a[1]; i++)
        {
            int c = 0;
            for(int j = 1; j < i; j++)
            {
                if(i % j == 0)
                    c++;
            }
            if(c == 1)
                cout<<i<<"\n";
        }
    }
    return 0;
}
