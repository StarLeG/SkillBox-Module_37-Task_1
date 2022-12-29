//
// Created by briti on 29.12.2022.
//

#include "include/calcMainWindow.h"

CalcMainWindow::CalcMainWindow(QWidget* parent) : QMainWindow(parent)
{
	lcdNumber = new QLCDNumber(12);
	lcdNumber->setSegmentStyle(QLCDNumber::Flat);
	lcdNumber->setDecMode();

}

void CalcMainWindow::add0()
{
	QString str = ((QPushButton*)sender())->text();
	buffer += str;
	lcdNumber->display(buffer.toDouble());

}

void CalcMainWindow::add1()
{
	QString str = ((QPushButton*)sender())->text();
	buffer += str;
	lcdNumber->display(buffer.toDouble());


}

void CalcMainWindow::add2()
{
	QString str = ((QPushButton*)sender())->text();
	buffer += str;
	lcdNumber->display(buffer.toDouble());
}

void CalcMainWindow::add3()
{
	QString str = ((QPushButton*)sender())->text();
	buffer += str;
	lcdNumber->display(buffer.toDouble());
}

void CalcMainWindow::add4()
{
	QString str = ((QPushButton*)sender())->text();
	buffer += str;
	lcdNumber->display(buffer.toDouble());
}

void CalcMainWindow::add5()
{
	QString str = ((QPushButton*)sender())->text();
	buffer += str;
	lcdNumber->display(buffer.toDouble());
}

void CalcMainWindow::add6()
{
	QString str = ((QPushButton*)sender())->text();
	buffer += str;
	lcdNumber->display(buffer.toDouble());
}


void CalcMainWindow::add7()
{
	QString str = ((QPushButton*)sender())->text();
	buffer += str;
	lcdNumber->display(buffer.toDouble());
}

void CalcMainWindow::add8()
{
	QString str = ((QPushButton*)sender())->text();
	buffer += str;
	lcdNumber->display(buffer.toDouble());
}

void CalcMainWindow::add9()
{
	QString str = ((QPushButton*)sender())->text();
	buffer += str;
	lcdNumber->display(buffer.toDouble());
}

void CalcMainWindow::add_div()
{

}

void CalcMainWindow::add_eq()
{

}

void CalcMainWindow::add_minus()
{

}

void CalcMainWindow::add_mul()
{

}

void CalcMainWindow::add_plus()
{

}

void CalcMainWindow::add_point()
{

}

void CalcMainWindow::add_ce()
{
	QString str = ((QPushButton*)sender())->text();
	buffer ="";
	lcdNumber->display("0");
}