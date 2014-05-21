/*
 * CMainWindow.h
 *
 *  Created on: May 21, 2014
 *      Author: bkloppenborg
 */

#ifndef CMAINWINDOW_H_
#define CMAINWINDOW_H_

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	  Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

private:
  Ui::MainWindow *ui;
};

#endif /* CMAINWINDOW_H_ */
