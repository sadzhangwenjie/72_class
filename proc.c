#include"proc.h"

void proc()
{
   char a[NUM];
   memset(a,'\0',sizeof(a));
   const  char *lable="|/-\\";
   int i=0;
   while(i<100)
   {
     fflush(stdout);
     a[i++]='#';
     usleep(100000);
     printf("[%-100s][%3d%%][%c]\r",a,i,lable[i%4]);
   }
   printf("\n");
}
