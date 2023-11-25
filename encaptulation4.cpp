//Q.1 Write a Program to get and display N numbers of Diamond companies information
// using encapsulation and use of Parameterised Constructor by including below
//mentioned attributes:
//- comp_id
//- comp_name
//- comp_staff_quantity
//- comp_revenue (per year)
//- comp_import_raw_diamonds (no. of raw diamonds
//imported per year)
//- comp_export_diamonds (no. of diamonds per year)
//- comp_ceo (name of CEO of the company)

#include<iostream>
#include<string>
using namespace std;

class diamond{
	
	private :
	int company_id,staff_quantity,company_revenue,raw_material;
	string company_name,company_ceo;
	
	public :
	void company()
		{
			cout << endl << " enter comapny_id " << endl;
			cin >> company_id;
			cout << endl << " enter company_name " <<endl;
			cin >> company_name;
			cout << endl << " enter staff_quantity " <<endl;
			cin >> staff_quantity;
			cout << endl << " enter raw_material  " <<endl;
			cin >> raw_material;
			cout << endl << " enter company_revenue " <<endl;
			cin >> company_revenue;
			cout << endl << " enter company_ceo " <<endl;
			cin >> company_ceo;
		}
		void reply(){
			cout << endl << company_id << endl;
			cout << endl << company_name << endl;
			cout << endl << staff_quantity << endl;
			cout << endl << raw_material << endl;
			cout << endl << company_revenue << endl;
			cout << endl << company_ceo << endl;			
		}
		diamond(){
			cout << endl << " surat diamond bourse ";
		}
		~diamond(){
			cout << endl << "thank you & visit again " << endl;
		}
};

main()
{
    int n;
    diamond d1[3];
    
    for(int i=1;i<3;i++)
	{
    	d1[n].company();
	}
	
	 
    for(int i=1;i<3;i++)
	{
    	d1[n].reply();
	}
}