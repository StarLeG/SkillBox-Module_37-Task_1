#include <QApplication>
#include "./ui_calculator.h"

int main(int argc, char* argv[])
{
	QApplication app(argc,argv);
	QMainWindow window(nullptr);
	Ui::MainWindow calculator;
	calculator.setupUi(&window);
	window.resize(640,480);
	window.show();

	return QApplication::exec();
}
