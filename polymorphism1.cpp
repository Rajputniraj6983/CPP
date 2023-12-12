#include<iostream>
using namespace std;

class Arithmethics
{
	protected :
		int a;
		int b;
		int c;
		int d;
		int e;
};
class operation : public Arithmethics
{
		public :
		void calculate(int a,int b)
		{
			this -> a = a;
			this -> b = b;
			
			cout << " addition = " << a + b << endl;
		}
		void calculate(int a,int b,int c)
		{
			this -> a = a;
			this -> b = b;
			this -> c = c;
			
			cout << " subtraction = " <<  a - b - c << endl;
			
		}
		void calculate(int a,int b,int c,int d)
		{
			this -> a = a;
			this -> b = b;
			this -> c = c;
			this -> d = d;
			
			cout << " multiplication = " << a * b * c * d << endl;
			
		}
		void calculate(int a,int b,int c,int d,int e)
		{
			this -> a = a;
			this -> b = b;
			this -> c = c;
			this -> d = d;
			this -> e = e;
			
			cout << " divide = " << a / b / c / d / e << endl;
				
		}
		
};

int main()
{
	operation o1;
	o1.calculate(10,20);
	o1.calculate(50,20,5);
	o1.calculate(2,3,4);
	o1.calculate(500,5,5,5,5);	
}

