// Life, Universe and Everything
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	while(1)
	{
		scanf("%d", &a);
		if(a != 42)
			printf("%d\n", a);
		else
			exit(0);
	}
	return 0;
}