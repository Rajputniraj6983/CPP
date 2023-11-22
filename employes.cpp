#include<iostream>
#include<string.h>
using namespace std;

class employes
{
	
   public :
	
    int id;
    string name;
    int age;
    string role;
    int salary;
    string city;
    int experience;
    string company_name;	
		
};
main()
{
	employes s1[4];
	int i;
	for(i=0;i<4;i++)
	{
		cout << "enter the employee number ";
		cout << endl;
		
		cout <<" enter id ";
		cin >> s1[i].id;
		cin.ignore();
		
		cout << " enter name ";
		getline(cin,s1[i].name);
	    cout <<" enter age ";
	    cin >> s1[i].age;
	    cin.ignore();
	    
	    cout <<" enter role ";
	    getline(cin,s1[i].role);
	    
	    cout <<" enter salary ";
	    cin >> s1[i].salary;
	    cin.ignore();
	    
	    cout <<" enter city ";
	    getline(cin,s1[i].city);
	    
	    cout << " experience ";
	    cin >> s1[i].experience;
	    
	    cin.ignore();
	    cout << " enter company_name ";
	    getline (cin,s1[i].company_name);
	    
	    }
	    
	    cout << "id" <<" "<<"name"<<" "<<"age"<<" "<<"role"<<" "<<"salary"<<" "<<"city"<<" "<<"experience"<<" "<<"company name"<<endl;
		
		for(i=0;i<5;i++)
		{
			cout<<" "<<s1[i].id<<" "<< s1[i].name<<" "<<s1[i].age<<" "<<s1[i].role<<" "<<s1[i].salary<<" "<<s1[i].city<<" "<<s1[i].experience<<" "<<s1[i].company_name<<endl;
		 
		}	    
	    
}