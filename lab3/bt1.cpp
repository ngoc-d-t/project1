#include<iostream>
using namespace std;


class time
{
	private:
		int hour;
		int minute;
		int second;
	public:
		time();
		time(int a , int b, int c);
		void xuat();
		void tinh(time,time);
};
time::time()
{
	hour=0;
	minute=0;
	second=0;
}

time::time(int a, int b,  int c)
{
	hour=a;
	minute=b;
	second=c;
}
void time::xuat()
{
	cout << hour << ":"  << minute << ":" <<second<<endl; 
}
{	
	int hour1=0;
	int minute1=0;
	int second1=a.second+b.second;
	while(second1>60)	
	{
		second-=60;
		minute1++;
	}
	minute1+=a.minute+b.minute;
	
	while(minute1>60)
	{
		minute1-=60;
		hour1++;
	}
	hour1+=a.hour+b.hour;
	while(hour1>23)
	{
		hour1-=24;
	}
	cout<<hour1<<":"<<minute1<<":"<<second1;


}

int main()
{
	time x;
	time a=time(3,4,5);
	time b=time(4,5,6);
	x.tinh(a,b);
	return 0;
}
