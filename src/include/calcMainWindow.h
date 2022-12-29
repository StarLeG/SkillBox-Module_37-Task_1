//
// Created by briti on 29.12.2022.
//

#ifndef TASK_1_CALCMAINWINDOW_H
#define TASK_1_CALCMAINWINDOW_H

#include <QMainWindow>
#include <QLCDNumber>
#include <QPushButton>
#include <QStack>
#include <iostream>
#include <QWidget>

class CalcMainWindow : public QMainWindow
{
	Q_OBJECT

public:
	QLCDNumber* lcdNumber = nullptr;
	CalcMainWindow(QWidget* parent = nullptr);
	void calculate();

private:
	QString buffer;



public slots:
	void add0();
	void add1();
	void add2();
	void add3();
	void add4();
	void add5();
	void add6();
	void add7();
	void add8();
	void add9();
	void add_point();
	void add_plus();
	void add_minus();
	void add_mul();
	void add_div();
	void add_eq();
	void add_ce();
};

#endif //TASK_1_CALCMAINWINDOW_H
