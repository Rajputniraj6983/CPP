#include<iostream>
#include<string.h>
using namespace std;

class cardetail
{
	public : 
	int carId;
	string carCompanyname;
	string color;
	int model;
	int releaseyear;
	
};

main()
{
	cardetail s1[4];
	int i;
	for(i=0;i<4;i++)
	{
		cout << " enter total car ";
		cout << endl;
		
		cout << " enter carId ";
		cin >> s1[i].carId;
		cin.ignore();
		
		cout << " enter carCompanyname ";
		cin >> s1[i].carCompanyname;
		cin.ignore();
		
		cout << " enter model ";
		cin >> s1[i].model;
		cin.ignore();
		
		cout << " enter color ";
		cin >> s1[i].color;
		cin.ignore();
		
		cout << " enter releaseyear ";
		cin >> s1[i].releaseyear;
		cin.ignore();
				
	}
	
	cout<< "carId" << " " << "carCompanyname" << " " << "model" << " " << "color" << " " << "releaseyear"<<endl;
	
	for(i=0;i<4;i++)
	{
		cout << " " <<s1[i].carId<<" "<<s1[i].carCompanyname<<" "<<s1[i].model<<s1[i].color << s1[i].releaseyear<<endl;
		
	}
}