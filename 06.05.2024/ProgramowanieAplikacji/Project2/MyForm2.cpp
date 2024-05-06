#include "MyForm2.h"
using namespace Project2;
[STAThreadAttribute]
int mainForm2() {
	MyForm2 mf;
	mf.ShowDialog();
	return 0;
}