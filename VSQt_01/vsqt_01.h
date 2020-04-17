#pragma once

#include <QtWidgets/QWidget>
#include "ui_vsqt_01.h"

class VSQt_01 : public QWidget
{
	Q_OBJECT

public:
	VSQt_01(QWidget *parent = Q_NULLPTR);

private:
	Ui::VSQt_01Class ui;
};
