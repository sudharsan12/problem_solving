#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int myatoi(char *str)
{
   long int num=0;
   int i=0;
   int sign=1;
   while(str[i]==' ')
   {
	   i++;
   }
   if(str[i]=='+')
   {
	   sign=1;
	   i++;
   }
   else if(str[i]=='-')
   {
	   sign=-1;
	   i++;
   }

   while((str[i]>='0'&&str[i]<='9'))
   {	   
     int val=str[i]-'0';
     num=num*10+val;
    long int chk=num*sign;
    if(chk>INT_MAX)
	    return INT_MAX;
    else if(chk<INT_MIN)
	    return INT_MIN;

     i++;
   }
printf("hai =%ld \n",num*sign);
	return num*sign;
}

int main()
{
	char str[200];

	scanf("%s",str);
      printf("%d \n",atoi(str));
	printf("result =%d \n",myatoi(str));
}
