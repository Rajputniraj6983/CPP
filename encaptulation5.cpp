#include<iostream>
#include<string>
using namespace std;

class Hospital
{
	private : 
	
	int patientcontactnum;
	string patientname,disease,id;
	static int helplinenumber;
	static string date;
	
	public :
		static int time;
		
		void appointment(){
			
			cout << endl << " enter patient id ";
			cin >> id;
			cout << endl << " enter patient name ";
			cin >> patientname;
			cout << endl << " enter patient disease ";
			cin >> disease;
			cout << endl << " enter patientcontactnum ";
			cin >> patientcontactnum;
			
		
		}
		void successfully()	{
			cout << endl << " enter patient id ";
			cin >> id;
			cout << endl << " enter patient name ";
			cin >> patientname;
			cout << endl << " enter patient disease ";
			cin >> disease;
			cout << endl << " enter patientcontactnum ";
			cin >> patientcontactnum;
					
    }

		
		Hospital()
		{
			cout << endl << " kiran hospital " << endl;
		}
		~Hospital()
		{
			cout << endl << " Take extra good care! ";	
		}	
		
   
};

int Hospital::helplinenumber = 108;
string Hospital::date = "27/11/2023";
int Hospital::time = 12;

main()
{
	
	int n;
	for(int i=0; i<3; i++)
	{
		Hospital h1;
		h1.appointment();
		h1.successfully();
		Hospital :: time+= 30;
	}
	
	
}