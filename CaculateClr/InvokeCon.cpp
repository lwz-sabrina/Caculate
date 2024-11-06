#include "InvokeCon.h"
using namespace CaculateClr;

InvokeCon::InvokeCon() {}

int InvokeCon::AddCli(int a, int b) {
	return Add(a, b);
}

int InvokeCon::SubCli(int a, int b) {
	return Subtract(a, b);
}

int InvokeCon::MulCli(int a, int b) {
	return Multiplication(a, b);
}

int InvokeCon::DivCli(int a, int b) {
	return Divided(a, b);
}
