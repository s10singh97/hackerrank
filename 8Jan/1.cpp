#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[25], b[25], t;
    scanf("%d", &t);
    if(t < 1 || t > 25)
        exit(0);
    for(int i = 0; i < t; i++)
        scanf("%d", &a[i]);
    for(int i = 1; i <= 25; i++)
    {
        b[i-1] = i*i*i;
        printf("%d ", b[i-1]);
    }
    for(int i = 0; i < t; i++)
    {
        int c = 0;
        for(int j = 0; j < t; j++)
        {
            if(b[j] <= a[i])
                c++;
            else
                break;
        }        
        printf("%d ", c);
    }
    return 0;
}
