#include <iostream>
using namespace std;

constexpr int getNumber()
{
	return 0;
}

int main() {

	{//2.4.1节
		const double pi = 3.14159; //圆周率
		const int numStudent = 30; //一个班级的学生人数
		int i = 100;
		const int ci = i;	//利用对象i 的值初始化ci
		//numStudent = 50;	//错误：不能对numStudent进行写值操作
		//ci = 50;			//错误：不能对const对象ci进行写值操作
		//const double pi;	//错误：const对象必须初始化
	}

	{//2.4.2节
		int num = 100;
		const int numStudent = num; //numStudent虽是一个const对象，但其值只有在程序运行期间获取，编译期间不能获取
	}

	{//2.4.2节
		constexpr int number = 10; // 10 是常量表达式
		constexpr int maxNumber = number + 1; //number+1是常量表达式
		constexpr int num = getNumber(); //是否合法取决于函数getNumber的属性
	}

	{//2.4.3节
		typedef double price;			// price是double的一个类型别名
		price car = 1E5, mobile = 100.; //car和mobile存放的都是价格
	}

	{//2.4.3节
		using price = double;			//用using声明double的以个别名price
		price car = 1E5, mobile = 100.; //car和mobile存放的都是价格
	}

	{//2.4.3节
		auto pi = 3.14159, rad = 1.0;	//pi 和rad都为double类型
		auto area = pi * rad * rad;		//area为double类型
	}

	{//2.4.3节
	 //auto i = 0, pi = 3.14159;		// 错误：i和pi的类型不一致
	}

	{//2.4.3节
		const double pi = 3.14159;
		auto rad = pi;			//rad是一个double类型数，pi的const属性被忽略
	}

	{//2.4.3节
		const double pi = 3.14159;
		const auto rad = pi;	//rad是const double类型;
	}

	{//2.4.3节
		int i = 0;
		decltype (i) j = 1;		//j为int类型
		decltype (i + j) k = 0; //k为int类型
	}

	{//2.4.3节
		const double pi = 3.14159;
		decltype (pi) rad = 1.0; //rad为const double类型
	}

	return 0;
}