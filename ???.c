#include <stdio.h>
int main ()
{
    int row=0,rank=0,num=0,blank=0;//row行，rank列变量,blank变量控制打印空格
	int n[10];
	for(num=1;num<=10;num++)//给数组赋初值，通过修改这一步得到你想要的数据
	{
	    n[num-1]=num;//通过修改这一步得到你想要的数据，例如2*num-1
	}
 
	num=0;
 
	for(row=1;row<=4;row++)//输出
	{
	    for(blank=1;blank<=5-row;blank++)
		   printf(" ");
		   
	        for(rank=1;rank<=row;rank++)
		{
		   printf("%d  ",n[num]);
		     num++;
		   if(rank==row)
		      printf("\n");
		}
	}
	printf("This is a test message dsa.");
	return 0;
}
