#include "vsqt_01.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	VSQt_01 w;
	w.show();
	return a.exec();
}
