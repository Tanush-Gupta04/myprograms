#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
int a=5,b=10,pid;
printf("Before fork a=%d b=%d\n",a,b);
pid=fork();
if(pid==0){
a=a+1;
printf("in child a=%d b=%d\n",a,b);
}
else{
sleep(1);
a=a-1;
b=b-1;
printf("in parent a=%d b=%d\n",a,b);
}
return 0;
}

