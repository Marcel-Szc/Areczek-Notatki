#include "MyForm.h"
using namespace Aplikacja1;
[STAThreadAttribute]
int main() {
	MyForm mf;
	mf.ShowDialog();

	return 0;
}