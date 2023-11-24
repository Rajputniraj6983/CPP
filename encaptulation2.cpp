//Q.1 Write a Program to get and display Hotels and static information using
//    Encapsulation with an array of objects member by including the 
//    below-mentioned attributes:
//- hotel_id
//- hotel_name -static
//- hotel_type (like hotel or motel)
//- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
//- hotel_location (city name)
//- hotel_establish_year - static
//- hotel_staff_quantity
//- hotel_room_quantity

#include<iostream>
#include<string>
using namespace std;

class Hotel
{
	private : 
	int hotel_id,hotel_rating,hotel_staffquantity,hotel_roomquantity;
	string hotel_type,hotel_location;
	static string hotel_name;
 	static int hotel_established;
    	
	public :
		void setter(){

		    cout <<" enter hotel_id ";
		    cin >> hotel_id;
		    cout <<" enter hotel_staffquantity ";
		    cin >> hotel_staffquantity;
		    cout <<" enter hotel_roomquantity ";
			cin >> hotel_roomquantity;
			cout <<" enter hotel_type ";
			cin >> hotel_type;
		    cout <<" enter hotel_rating ";
			cin >> hotel_rating;
			cout <<" enter hotel_location ";
			cin >> hotel_location;

		}
	    void getter(){
			cout <<"enter hotel_id";
			cin >> hotel_id;
			cout <<"enter hotel_staffquantity";
			cin >> hotel_staffquantity;
			cout <<"enter hotel_roomquantity";
			cin >> hotel_roomquantity;
			cout <<"enter hotel_type";
			cin >> hotel_type;
			cout <<"enter hotel_rating";
			cin >> hotel_rating;
			cout <<"enter hotel_location";
			cin >> hotel_location;

		}
};
string Hotel::hotel_name;
int Hotel::hotel_established;

int main(){
	
	int n;
	
	Hotel h1[2];
	cout << "enter hotel detail" << endl;
//    cin >> Hotel_detail;
	for(int i=0;i<2;i++){
		
		h1[n].setter();		
	}
	
	for(int i=0;i<2;i++){
		
		h1[n].getter();
		
	}
}