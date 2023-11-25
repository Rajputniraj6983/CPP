//Q.2 Write a Program to get and display N numbers of Fast Food cafe information 
//	  using encapsulation and the use of a Default constructor
//	  by including the below-mentioned attributes:
//	- cafe_id
//	- cafe_name
//	- cafe_type (like a rooftop or normal)
//	- cafe_rating (like 1 Star, 2 Start, ..., 5 Star)
//	- cafe_location (city name)
//	- cafe_establish_year
//	- cafe_staff_quantity

#include<iostream>
#include<string>
using namespace std;

class Cafedata{
	
	private : 
	int cafe_id,cafe_rating,cafe_staff_quantity;
	string cafe_name,cafe_type,cafe_location;
	
	static int cafe_established_year;
	
	public :
		
		void menue(){
			cout << endl <<" enter cafe_id ";
			cin >> cafe_id;
			cout << endl <<" enter cafe_name ";
			cin >> cafe_name;
			cout << endl <<" enter cafe_type(rooftop / normal) ";
			cin >> cafe_type;
			cout << endl <<" enter cafe_location ";
			cin >> cafe_location;
			cout << endl <<" enter cafe_staff_quantity ";
			cin >> cafe_staff_quantity;
			cout << endl <<" enter cafe_rating ";
			cin >> cafe_rating;
	}
		void order(){
			cout << endl << " enter cafe_id " << endl;
			cout << endl << " enter cafe_established_year " << endl;
			cout << endl << " enter cafe_name " << endl;
			cout << endl << " enter cafe_type " << endl;   		
			cout << endl << " enter cafe_location " << endl; 
			cout << endl << " enter cafe_staff_quantity " << endl; 
			cout << endl << " enter cafe_rating " << endl;
			
			}
		Cafedata(){
			
			cout << " welcome to you & me cafe " << endl << endl;
			
		}
		~Cafedata(){
			cout << " visit again " << endl << endl;
			
		}
};

int main(){
	
	int i;
	
//	 cout << " enter your Cafe Name " << endl << endl;
//	Cafedata c1; 
	 for(i=0;i<3;i++){
	 	
	 	Cafedata c1;
	 	c1.menue();
	 	c1.order();
	 }
	
}