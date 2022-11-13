#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <string.h>
int main() {
	//int ch = 0;
	////EOF是文件结束标志-end of file
	//while ((ch = getchar()) != EOF) {
	//	putchar(ch);
	//}
	//int ch = 0;
	//char password[20] = { 0 };
	//int reg=0;
	//printf("请输入密码:");
	//scanf("%s/n", password);
	//printf("请确认密码[Y/N]:");
	///*getchar();*/
	//while ((ch=getchar())!='\n')
	//{
	//	;
	//}
	//reg = getchar();
	//if (reg == 'Y') {
	//	printf("确认成功");
	//}
	//else
	//{
	//	printf("放弃确认");
	//}
	/*int ch = 0;
	while( (ch=getchar())!=EOF)
	{
		if (ch < '0' || ch > '9') {
			continue;
			
		}
		putchar(ch);
		printf("%d\n", ch);
	}*/
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 10; i++) {
	//	//如果把j=0去掉的话，这个程序就只打印十个hehe，因为第二次fori循环的时候，j的值没有初始化，条件不成立，一直如此。
	//	for (j = 0; j < 10; j++) {
	//		printf("hehe\n");
	//	}
	//}


	//n的阶层
	/*int n = 0;
	int i = 0;
	int ch = 0;
	int sum = 1;
	printf("请输入你想要计算阶层的数：\n");
	scanf("%d\n", &n);
	while ((ch=getchar())!='\n')
	{
		;
	}
	for (i = 0; i < n; i++) {
		sum = sum * (n - i);

	}
	printf("%d", sum);*/


	//计算1！。。。+10！
	/*int i = 0;
	int j = 0;
	int sum = 1;
	int tsum = 0;
	for (i = 0; i < 12; i++) {
		for (j = 1; j < i; j++) {
			sum = sum * (i-j);
		}
		tsum = tsum + sum;
		sum = 1;
	}
	printf("%d\n", tsum);*/
	

	//二分查找

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 7;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int left = 0;
	//int right = sz - 1;
	//while (left<=right)
	//{
	//	int mid = (left + right) / 2;
	//	if (arr[mid] > k) {
	//		right = mid - 1;
	//	}
	//	else if (arr[mid] < k) {
	//		left = mid + 1;
	//	}
	//	else {
	//		printf("找到了，下标是：%d\n", mid);
	//		break;
	//	}

	//}
	//if (left > right) {
	//	printf("找不到了");
	//}


//向中间靠拢
char arr1[] = "I love XueYuPing !!!!!";
char arr2[] = "**********************";
int left = 0;
int right = strlen(arr1)-1;
while (left <= right) {
	arr2[left] = arr1[left];
	arr2[right] = arr1[right];
	printf(" % s\n", arr2);
	Sleep(1000);
	system("cls");
	left++;
	right--;
}
printf("%s\n", arr2);

	return 0;
}
