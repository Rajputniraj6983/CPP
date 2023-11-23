//Q.1 Write a Program to create Student Record System for 5 students using Encapsulation. Consider the below-mentioned attributes in the Student class:
//- stu_id
//- stu_name
//- stu_age
//- stu_course
//- stu_city
//- stu_email
//- stu_college

#include<iostream>
#include<string.h>
using namespace std;

class Students 
{
	private :
		
	int  std_id,std_age;
	string  std_name,std_course,std_city,std_email,std_college;

	
	public :
void setter()
{
			
	cout << " enter the std_id ";
	cin >> std_id;
	cout << " enter the std_name ";
	cin >> std_name;
	cout << " enter the std_age ";
	cin >> std_age;
	cout << " enter the std_course ";
	cin >> std_course;
	cout << " enter the std_city ";
	cin >> std_city;
	cout << " enter the std_email ";
	cin >> std_email;
	cout << " enter the std_college ";
	cin >> std_college;
}

void getter() 
  {
		
	cout << " enter the std_id ";
	cin >> std_id;
	cout << " enter the std_name ";
	cin >> std_name;
	cout << " enter the std_age ";
	cin >> std_age;
	cout << " enter the std_course ";
	cin >> std_course;
	cout << " enter the std_city ";
	cin >> std_city;
	cout << " enter the std_email ";
	cin >> std_email;
	cout << " enter the std_college ";
	cin >> std_college;
	
  }
};
int main()
{
	Students s1[5];
		cout << " enter std detail "<< endl;
		for(int i=0;i<5;i++)
		{
			s1[i].setter();
			
		}
		
		cout << " enter std detail "<< endl;
		for(int i=0;i<5;i++)
		{
			s1[i].getter();
			
		}
		return 0;
		
}
