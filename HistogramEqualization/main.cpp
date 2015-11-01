//HistogramEqualization
//Author:ShadowK
//email:zhu.shadowk@gmail.com
//2015.10.31
//Use Ctrl+M,Ctrl+O to fold the code.

#include <string>
#include "SKCommandHandler.h"
#include "SKDefinition.h"

int main()
{
	SKCommandHandler cmd;
	while (1)
	{
		string str;
		cmd.begin();
		getline(cin, str);
		if (cmd.handle(str))
			break;
	}
	return 0;
}