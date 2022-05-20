//competito
#include"User.h"
#include<iostream>
#include<string>
using namespace std;

//competitor class
class Competitor: public user
{
	private:
		string name;
		int age;
		int dob;
		string civilStatus;
		string address;
		
	public:
		Competitor();
		Competitor(string name, int page, int pdob, string civilStatus, string addres);
		void readComments();
    ~Competitor();
};