#ifndef WMTTOOL_H
#define WMTTOOL_H

#include <QMainWindow>

namespace Ui {
class WMTtool;
}

class WMTtool : public QMainWindow
{
    Q_OBJECT

public:
    explicit WMTtool(QWidget *parent = 0);
    ~WMTtool();

private:
    Ui::WMTtool *ui;
};

#endif // WMTTOOL_H
