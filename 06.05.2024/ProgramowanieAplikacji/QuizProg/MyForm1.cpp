#include "MyForm1.h"
using namespace QuizProg;
[STAThreadAttribute]
int mainForm1() {
	MyForm1 mf;
	mf.ShowDialog();
	return 0;
}