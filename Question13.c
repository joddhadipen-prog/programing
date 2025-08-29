#include <stdio.h>
int main()
{
int bytes,KB,MB,GB;
printf("enter numbers of bytes");
scanf("%d", &bytes);
KB = bytes / 1024;
MB = bytes / (1024*1024);
GB = bytes / (1024*1024*1024);
printf("KB=%d\n",KB);
printf("MB=%d\n",MB);
printf("GB=%d\n",GB);
return 0;
}
