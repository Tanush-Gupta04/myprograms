#include <stdio.h>
#include <unistd.h>
int main()
{
fork();
fork()&&fork()||fork();
fork();
printf("nicee\n");
return 0;
}
