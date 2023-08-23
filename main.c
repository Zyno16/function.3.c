#include <stdio.h>
#include <stdlib.h>
int i,estpremier;
void premier (int n){
estpremier=1;
for(i=2;i<n/2;i++){
    if(n%i==0){
    estpremier =0;
    break;
    }
}
if(estpremier ==1)
   printf("the number is  prime");
else
    printf("the number is not prime");
}
int main()
{int n ;
printf("enter n value");
scanf("%d",&n);
premier(n);

    return 0;
}
