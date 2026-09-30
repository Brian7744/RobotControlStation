#ifndef ROBOTCONTROLSTATION_H
#define ROBOTCONTROLSTATION_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class RobotControlStation;
}
QT_END_NAMESPACE

class RobotControlStation : public QMainWindow
{
    Q_OBJECT

public:
    RobotControlStation(QWidget *parent = nullptr);
    ~RobotControlStation();

private:
    Ui::RobotControlStation *ui;
};
#endif // ROBOTCONTROLSTATION_H
