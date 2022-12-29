#include <QApplication>
#include "./ui_calculator.h"
#include "include/calcMainWindow.h"

int main(int argc, char* argv[])
{

	QApplication app(argc,argv);
	CalcMainWindow window(nullptr);
	Ui::MainWindow calculator;
	calculator.setupUi(&window);
	window.lcdNumber = calculator.lcdNumber;
	window.resize(640,480);
	window.show();

	return QApplication::exec();
}
