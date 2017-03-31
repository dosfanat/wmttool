#include "wmttool.h"
#include "ui_wmttool.h"

WMTtool::WMTtool(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WMTtool)
{
    ui->setupUi(this);
}

WMTtool::~WMTtool()
{
    delete ui;
}
