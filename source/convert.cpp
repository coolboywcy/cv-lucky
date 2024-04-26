#include <iostream>
#include <string>
#include "convert.h"

using namespace std;

Convert::Convert(const int &asciilValue):m_asciilValue(asciilValue)
{
}

Convert::~Convert()
{
}

const char Convert::Reflection(const int &asciilValue)const
{
	char controlChar = static_cast<char>(asciilValue);

	return controlChar;
}

void Convert::PrintPasswd()const
{
	int B=(m_asciilValue+23)%128;
	int C=(m_asciilValue+5)%128;

	char B1=Reflection(B);
	char C1=Reflection(C);

 	string rolenamestr="ROLENAME";
	string prestr(1,B1);
	string latterstr(1,C1);
	string passwdstr=prestr+rolenamestr+latterstr; 

	cout<<"the passwd is "<<passwdstr<<endl;
}
