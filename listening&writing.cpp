#include<iostream>                                       //包含本程序所需的一系列头文件，以便在程序中使用c++语言内置函数 
#include<iomanip>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<ctime>

using namespace std;                                     //使用标准命名空间

int main()                                               //以整数类型定义主函数（即主程序）
{
	cout<<"listening&writing v2.0"<<endl;
	cout<<"made by Z Hx"<<endl;
	cout<<"2018.5.19"<<endl<<endl;
	int i,all=0;                                         //定义两个整数类型变量分别命名为i和all，并开辟其对应内存空间，在以下循环中i作为指针参与循环设定，all记录循环次数
	double sum=0;                                        //定义一个双精度浮点类型变量命名为sum，并开辟其对应内存空间，记录正确输入的次数
	char C[2][51]={{"你好"},{"世界"}};                   //定义一个2行51列的二维字符串命名为C，并开辟其对应内存空间，赋值储存中文词义
	char E[2][51]={{"hello"},{"world"}};                 //定义一个2行51列的二维字符串命名为E，并开辟其对应内存空间，赋值储存词义对应的英文单词
	char Ip[51];                                         //定义输入字符串变量
	
	int j,a[101];                                        //以整数类型定义一个变量和一个一维数组，分别命名为j和a，其中j作为指针参与随机数数组的生成，a则用于储存随机数 
	    srand((int)time(NULL));                          //使用系统时间作为随机数种子 
	for(j=0;j<=1;++j)                                    //生成随机数并进行赋值储存 
	    a[j]=j;
	for(j=1;j>=1;--j)
	    swap(a[j],a[rand()%j]);
	/*for(j=0;j<=1;j++)
    	cout<<a[j]<<endl;                                //输出以便检验随机数*/
	
	cout<<"请输入给出中文词义对应的英语单词";
	cout<<"（只输入小写字母）";
	cout<<endl<<"考查范围：英语X修X Module X";
	cout<<endl<<endl;                                    //输出提示与考察范围
	
	system("pause");                                     //暂停程序
	cout<<endl;
	
	for(i=0;i<=1;i++)                                    //将指针i的值初始化为零，每进行一次循环，i的值自增1，当i的值大于1时结束循环
	{
		all+=1;                                          //循环输出计数
		cout<<i+1<<','<<C[a[i]]<<endl;                   //循环输出中文词义
		gets(Ip);                                        //循环输入单词
		
		if(strcmp(Ip,E[a[i]])==0)                        //循环判断输入的单词与内存中的正确单词是否一致
		{
			sum+=1;
			cout<<"正确"<<endl;
		}
		else
		 cout<<"错误"<<endl;
	}
	
	cout<<endl<<"你的正确率为：";
	cout<<fixed<<setprecision(2)<<sum/all*100<<'%'<<endl;//保留两位小数输出用户的正确率
	
	if(sum/all*100>=80)                                  //判断是否及格
	    cout<<"及格"<<endl;
	else
	    cout<<"不及格"<<endl;
	
	cout<<endl;
	system("pause");
	
	return 0;                                            //顺利结束本程序*/
}
//made by 莫殇
//2018.5.19
