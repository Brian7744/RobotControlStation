#ifndef ROBOTCONTROLSTATION_H
#define ROBOTCONTROLSTATION_H

#include <QMainWindow>
#include <QUdpSocket>

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
    void readPendingDatagrams();

private:
    Ui::RobotControlStation *ui;
    QUdpSocket *udpSocket;

};
#endif // ROBOTCONTROLSTATION_H
