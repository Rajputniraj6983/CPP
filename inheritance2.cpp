#include<iostream>
#include<string>

using namespace std;

class p
{
	public :
	float a,b;
		void temp()
		{
			cout << " enter temperature ";
			cin >> a;
		}
};
class q : public p
{
	public :
		void fahrenheit()
		{
			cout << " " << (a*9/5)+32 << endl;
		}
};
class r : public q
{
	public :
		void tokelvin()
		{
		cout << "  " << a+273.15;
		}
};
int main()
{
	r r1;
	
	r1.temp();
	r1.fahrenheit();
	r1.tokelvin();
	
	return 0;
}
		