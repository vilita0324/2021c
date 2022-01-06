# week04

## week04-1
```c++
#include <stdio.h>
int main()
{
    int a=123,b=10;
    printf("%d\n",a+b);
    printf("%5d\n",a+b);
}


```
## week04-2
```c++
#include <stdio.h>
int main()
{
    float a=3.14159265358979;
    double b=3.14159265358979;
    printf("%f\n",a);
    printf("%d\n",b);
    printf("%.4f\n",b);
    printf("%.9f\n",b);
    printf("%.13f\n",b);
}

```
## week04-3
```c++
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if (n>=90) printf("A+");
	else if(n>=80) printf("A");
	else if(n>=70) printf("B");
	else if(n>=60) printf("C");
	else printf("D");
}


```
## week04-4
```c++
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if (n<=100 && n>=90) printf("A+");
	if (n<=89 && n>=80) printf("A");
	if (n<=79 && n>=70) printf("B");
	if (n<=69 && n>=60) printf("C");
	if (n<=50) printf("D");
}

```