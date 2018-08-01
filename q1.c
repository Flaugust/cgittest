#include<stdio.h>

int main()
{
	int i, j, k, cnt = 0;

	printf("由1,2,3,4组成的互不相同且无重复数字的三位数列表：\n");
	for (i = 1; i <= 4; i++)
		for (j = 1; j <= 4; j++)
			for (k = 1; k <= 4; k++)
				if (i != j && j != k && i != k){
					printf("%d%d%d\n", i, j, k);
					cnt++;
				}
				
	printf("总计个数：\n");
	printf("cnt=%d\n", cnt);

	return 0;
}
