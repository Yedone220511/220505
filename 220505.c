#include <stdio.h> //��������Ӧ��

int main()
{
	int a = (int)3.14; //3.14������double ���ͣ�ǿ��ת��Ϊint���� 

	return 0;
}

//��ϵ������ >=, <=, ==, !=

//�߼������� ��0Ϊ�٣���0Ϊ�棩 
//&&  �߼���(���������棬��������棬����Ϊ��)��a=3, b=5, c=a&&b, ��ôc=1 Ϊ�� ��a=0, b=5, c=a&&b, ��ôc=0 Ϊ�١� 
//||  �߼���(������һ��Ϊ�棬�����Ϊ��)��a=0, b=5, c=a||b, ��ôc=1 Ϊ�� 

//����������(��Ŀ������)
//exp1 ? exp2: exp3; 
//int a= 100;
//int b= 20;
//int max=10
//max=(a>b?a:b) ���a>b��max=a������max=b�� 

//���ű��ʽ
//exp1, exp2, exp3.....expN
//
//�±����� [] 
//�������� ()
//�ṹ��Ա .  -> 


// int a=10
// int b=a++������++����ʹ�ã���++�����a=11��b=10
// int b=++a, ǰ��++����++����ʹ�ã����a=11, b=11

//int main()
//{
//	int a=0; //4���ֽڣ�32����λ 
//	int b=~a;  //��a���ж�����ȡ�� 
//	printf("%d\n", b); //���Ϊ-1��ԭ�룬���룬���� 
//	return 0;
//}
//ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
//������ԭ�룬���룬������ͬ
//��������һλ�Ƿ���λ��1��ʾ���� 
//ԭ�룺ֱ�Ӱ�������д���Ķ���������          10000000000000000000000000000010
//���룺ԭ��ķ���λ���䣬����λ��λȡ���õ�  11111111111111111111111111111101
//���룺����+1�õ�                            11111111111111111111111111111110
//
//�����ؼ��֣�
//auto break case char const continue default do double else enum  
//extern float for goto if int long register return short signed
//sizeof static struct switch typedef union unsigned void volatile while





#include <stdio.h>
#include <string.h>

int main() //����Ӧ��
{
	int a = 10;
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	printf("%d\n", sizeof(a)); //��������a���ֽڴ�С��4 
	printf("%d\n", sizeof(int)); //��������int���ֽڴ�С��4 
	printf("%d\n", sizeof a);  //��������a���ֽڴ�С��4 
	printf("%d\n", sizeof(arr)); //���������С��Ϊ6�����͵��ܺͣ�6*4=24 
	printf("%d\n", sizeof(arr) / sizeof(arr[0])); //�����С���Ե�һ�����Ĵ�С���������������Ԫ�ظ�����6 
	return 0;
}