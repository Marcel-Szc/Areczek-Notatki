#include "MyForm1.h"
using namespace Project2;
[STAThreadAttribute]
int mainForm1() {
	MyForm1 mf;
	mf.ShowDialog();
	return 0;
}
