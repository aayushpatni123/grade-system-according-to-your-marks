#include<iostream>
using namespace std;
void grade(int marks)
{
	if(marks>90 && marks<=100)
	{
		cout<<"you got AA grade ";
	}
	else if(marks>80 && marks<=90)
	{
		cout<<"you got AB grade ";
	}
	else if(marks>70 && marks<=80)
	{
		cout<<"you got BB grade ";
	}
	else if(marks>60 && marks<=70)
	{
		cout<<"you got BC grade ";
	}
	else if(marks>50 && marks<=60)
	{
		cout<<" you got CD garde ";
	}
	else if(marks>40 && marks<=50)
	{
		cout<<"you got DD grade ";
	}
	else
	{
		cout<<"you are fail ";
	}
}
int main()
{
	int marks;
	cout<<"enter your marks ";
	cin>>marks;
    grade(marks);
	return 0;
}
