#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int s;
    scanf("%d", &s);
    if(s < 0 || s > 250)
        exit(0);
    if(s <= 90)
        printf("0 No punishment");
    else if(s >= 91 && s <= 110)
        printf("%d Warning", (s-90)*300);
    else
        printf("%d License removed", (s-90)*500);
    return 0;
}
