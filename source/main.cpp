//You need to understand what's third passwd,then you need to find its value of ASCLL comparision form,we call int A=its value of ASCLL comparison form,int B=A+23;int C=A+5;right here,you need to find their control charaters according the ASCLL comparison form separately,so we call B1=Reflection(B),C1=Reflection(C),then you need the role name of the Jade Goddess of Mercy,we mark it rolename,but the rolename need to change capital,then combine the B1 and C1,but the ROLENAME in the middle,so the finally real passwd is B1ROLENAMEC1.For example,if the third passwd is X and the role name of the Jade Goddess of Mercy is tiejun,then the real passwd is oTIEJUN].hurry up!
#include "convert.h"
#include <array>

using namespace std;
const int g_JASCII=74;
const int g_XASCII=88;

int main()
{
	array<int,2> jxarray={g_JASCII,g_XASCII};
	for(const auto &temp:jxarray)
	{
		Convert oConvert(temp);
		oConvert.PrintPasswd();		
	}

	return 0;
}
