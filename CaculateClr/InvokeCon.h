#pragma once
#include "../Caculate/CaculateData.h"

namespace CaculateClr {
	public ref class InvokeCon
	{
	public:
		InvokeCon();
		int AddCli(int a, int b);
		int SubCli(int a, int b);
		int MulCli(int a, int b);
		int DivCli(int a, int b);
	};
}

