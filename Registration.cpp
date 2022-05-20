//#include"webpage.h"
#include"Registration.h"
#include<iostream>
#include<cstring>

using namespace std;

Registration_page::Registration_page(){}

Registration_page::(string pname, int ptelNo,std::string pUsername,string p_Password)
{
	name = pname;
	telNo = ptelNo;
	username = pUsername;
	password = p_Password;
}

void Registration_page::strore(std::string pusername, std::string pPassword)
{
	username = pusername;
	password = pPassword;
}

void Registration_page::verify(int pverification_Code)
{
	verification_Code = pverification_Code;
};