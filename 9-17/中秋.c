#include <stdio.h>
//关系操作符，==用于判断是否相等
//int Ad(int o, int p)
//{
//	return o * p;
//}
//int main()
//{
//	/*int a = 10;
//	if (a =0) 
//		{
//		printf("hehe\n");
//		}*/
//	
//	int a = 1;
//	int b = 5;
//	int r = (b = ++a, b);
//	printf("%d", r);
//	char ch[] = { 'w','0'};
//	printf("%d", ch[0]);
//	
//	int f = Ad(a, b);
//	printf("\n%d", f);
//	return 0;
//}
//逻辑操作符5    &&逻辑语“与，并且”       ||逻辑语“或者”
//条件操作符6    也叫三目操作符 exp1？exp2：exp3 真要前 假要后
//注释的话，ctrl按住，kukc，ku解除
//逗号表达式7，逗号隔开的一串表达式，从左向右依次计算，整个表达式的结果是最后一个表达式的结果,前面的计算结果会影响后面的值
//下标引用操作符8 arr[3]中的[]即为下标引用操作符，arr和3均为[]操作数,arr[n]=3在n值确定时是确定的
//函数调用操作符9,其中Ad和a和b均为()的操作数，即函数调用操作符




//常见关键字（c语言本身携带内置，不能自己创建），auto 自动（所有变量均为自动变量，一般省略），break 跳出循环（for while ） 
//case（与switch有关，分支语句），数据类型关键字（可能重合），const 常属性，continue 循环，default 循环，
//enum 枚举，struct 结构体，union 联合体
//extern 声明外部变量
//register 寄存器，static 静态的
// return 返回（用于函数末尾的返回值），（un）signed （没）有符号的，
// typedef 类型重命名，void 无（函数参数或者返回类型）
//volatile
//变量命名，有意义，必须是字母数字或下划线组成，不可以有特殊字符，不能以数字开头
//enum 枚举名{枚举值表}




//typedef，类型重命名,还可以针对于struct等一系列类型
//typedef unsigned int uint;
//int main()
//{
//	uint num2 = 1;
//	return 0;
//}



//static 静态
//可以修饰全局变量，局部变量，函数
void test()//前有void后面可以不需要返回
{
	static int a = 1;//a的地址没有变化
	a++;
	printf("%d ", a);
}//a销毁
int main()
{
	int i = 0;
	while (i < 10)
	{
		test();//调test函数，不断创建a和销毁a，a是一个局部变量//但是，但是，如果在第64行加上static，那么
		//a出了范围也没有销毁
		i++;
	}//10个2
	/*printf("\n%d", a);*///static修饰局部变量，局部变量，不销毁，因为它改变了变量的存储位置
	//内存分为栈区（含局部变量，进创出毁），堆区和静态区（静态变量，static改到此处，影响了生命周期）
	return 0;
}