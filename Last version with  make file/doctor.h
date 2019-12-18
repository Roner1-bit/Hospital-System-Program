#include <iostream>
using namespace std;
class Doctor{
	private :
		string name;
		int age;
		string department;
		int number_of_patients;
		string patient_history;
		public :
			Doctor();
			Doctor(string x,int y,string z,int g);
			void setname(string x);
			string getname();
			void setage(int x);
			int getage();         
			void setdepart(string x);
			string getdepart();
         void setnumber_of_patient(int x); 
         int getnumber_of_patient();
         void editpatienthistory(string x);
         string geteditpatienthistory();
         void roomsvalidator ();
         
};
