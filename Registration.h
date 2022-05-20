#include"Webpage.h"
#include<iostream>
#include<string>

using namespace std;

class Registration_page : public web_page 
{
protected :
	string name;
	int telNo;
	int verification_Code;

private : 
	string username;
	string password;

public : 
	Registration_page();


//get details
	Registration_page(string pname, int ptelNo,string pUsername,string p_Password );
	void strore(std::string pusername,string pPassword);
	void verify(int pverificationCode);
};