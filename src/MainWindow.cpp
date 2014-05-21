/*
 * MainWindow.cpp
 *
 *  Created on: May 21, 2014
 *      Author: bkloppenborg
 */

#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);

}

MainWindow::~MainWindow()
{
	// TODO Auto-generated destructor stub
}
