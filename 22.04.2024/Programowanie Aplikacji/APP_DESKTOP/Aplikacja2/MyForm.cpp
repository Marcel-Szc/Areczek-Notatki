#include "MyForm.h"
using namespace Aplikacja2;
[STAThreadAttribute]
int main() {
	MyForm mf;
	mf.ShowDialog();

	return 0;
}