#include<iostream>
using namespace std;

class x
{
	public :
		int a,b,c;
		
};
class y : public x
{

	public :
	
		void set()
		{
			cout << " enter value of a " ;
			cin >> a;
			cout << " enter value of b " ;
			cin >> b;
			cout << " enter value of c " ;
			cin >> c;
		}
		void get()
		{
			cout << " cube a : " << a*a*a << endl;
			cout << " cube b : " << b*b*b << endl;
			cout << " cube c : " << c*c*c << endl;
		}
};
int main()
{
	y e1;
	e1.set();
	e1.get();
	
	return 0;
}
