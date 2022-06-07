#include <stdio.h> //操作符的应用

int main()
{
	int a = (int)3.14; //3.14本来是double 类型，强制转换为int类型 

	return 0;
}

//关系操作符 >=, <=, ==, !=

//逻辑操作符 （0为假，非0为真） 
//&&  逻辑与(两个都是真，结果才是真，否则为假)：a=3, b=5, c=a&&b, 那么c=1 为真 ；a=0, b=5, c=a&&b, 那么c=0 为假。 
//||  逻辑或(两个有一个为真，结果就为真)：a=0, b=5, c=a||b, 那么c=1 为真 

//条件操作符(三目操作符)
//exp1 ? exp2: exp3; 
//int a= 100;
//int b= 20;
//int max=10
//max=(a>b?a:b) 如果a>b，max=a，否则max=b。 

//逗号表达式
//exp1, exp2, exp3.....expN
//
//下标引用 [] 
//函数调用 ()
//结构成员 .  -> 


// int a=10
// int b=a++，后置++，先使用，后++，结果a=11，b=10
// int b=++a, 前置++，先++，后使用，结果a=11, b=11

//int main()
//{
//	int a=0; //4个字节，32比特位 
//	int b=~a;  //对a进行二进制取反 
//	printf("%d\n", b); //结果为-1，原码，反码，补码 
//	return 0;
//}
//只要是整数，内存中存储的都是二进制的补码
//正数的原码，反码，补码相同
//负数：第一位是符号位，1表示负号 
//原码：直接按照正负写出的二进制序列          10000000000000000000000000000010
//反码：原码的符号位不变，其他位按位取反得到  11111111111111111111111111111101
//补码：反码+1得到                            11111111111111111111111111111110
//
//常见关键字：
//auto break case char const continue default do double else enum  
//extern float for goto if int long register return short signed
//sizeof static struct switch typedef union unsigned void volatile while





#include <stdio.h>
#include <string.h>

int main() //数组应用
{
	int a = 10;
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	printf("%d\n", sizeof(a)); //计算整型a的字节大小：4 
	printf("%d\n", sizeof(int)); //计算整型int的字节大小：4 
	printf("%d\n", sizeof a);  //计算整型a的字节大小：4 
	printf("%d\n", sizeof(arr)); //计算数组大小，为6个整型的总和，6*4=24 
	printf("%d\n", sizeof(arr) / sizeof(arr[0])); //数组大小除以第一个数的大小，等于数组包含的元素个数：6 
	return 0;
}