#include "settingsdialog.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SettingsDialog w;
	w.show();
	return a.exec();
}
