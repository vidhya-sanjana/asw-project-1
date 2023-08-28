#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int n;
scanf("%d",&n);

int a[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
int min=a[0];
    int location=0;

for(int i=0;i<n;i++)
{
    if(a[i]<min)
    {
        min=a[i];
       location=i;
    }
}
if(n<=0)
{
   printf("-1\n"); 
}
else{
printf("%d\n",location);
printf("%d\n",min);    
}
return 0;
}
