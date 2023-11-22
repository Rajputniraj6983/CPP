#include<iostream>
using namespace std;
class time
{
	public :
	int sec,min,hours;
	
	void input()
	{	
	    cout <<" enter the sec ";
	    cin >>sec
		 ;
	    
	    
		hours = sec/3600;
		min = sec/ 60;
		sec = sec%60;
    }
    
	void output() 
	{

		cout << " time " <<hours << ":" << min << ":" << sec ;
    }
};

main()
{

   time obj;
   	
   obj.input();
   obj.output();
	
}