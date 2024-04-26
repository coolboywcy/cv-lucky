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
