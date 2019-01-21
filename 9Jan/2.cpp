// Prime generator

#include<iostream>
#include<math.h>
using namespace std;

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
            for(int j = 1; j < sqrt(i)+1; j++)
            {
                if(j == 1)
                    continue;
                if(i % j == 0)
                    c++;
                if(j == 2)
                    c++;
            }
            if(i == 2)
                cout<<i<<"\n";
            if(c == 1)
                cout<<i<<"\n";
        }
    }
    return 0;
}