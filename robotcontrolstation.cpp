#include "robotcontrolstation.h"
#include "ui_robotcontrolstation.h"

RobotControlStation::RobotControlStation(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::RobotControlStation)
{
    ui->setupUi(this);
    udpSocket = new QUdpSocket(this);

    connect(udpSocket, &QUdpSocket::readyRead,this, &RobotControlStation::readPendingDatagrams);

    const quint16 port = 5000;


    if (!udpSocket->bind(QHostAddress::AnyIPv4, port)) {
        qDebug() << "Error al abrir el puerto UDP:"
                 << udpSocket->errorString();
    } else {
        qDebug() << "UDP escuchando en el puerto:"
                 << port;
    }
}

RobotControlStation::~RobotControlStation()
{
    delete ui;
}

void RobotControlStation::readPendingDatagrams(){

    /*
    while (udpSocket->hasPendingDatagrams()) {

        QByteArray datagram;
        datagram.resize(udpSocket->pendingDatagramSize());

        QHostAddress sender;
        quint16 senderPort;

        udpSocket->readDatagram(
            datagram.data(),
            datagram.size(),
            &sender,
            &senderPort
            );

        qDebug() << "Datagrama recibido:";
        qDebug() << "IP:" << sender.toString();
        qDebug() << "Puerto:" << senderPort;
        qDebug() << "Datos:" << datagram;
    }
    */
    while (udpSocket->hasPendingDatagrams()) {

        QByteArray datagram;
        datagram.resize(udpSocket->pendingDatagramSize());

        QHostAddress sender;
        quint16 senderPort;

        udpSocket->readDatagram(
            datagram.data(),
            datagram.size(),
            &sender,
            &senderPort
            );

        QString mensaje = QString("[%1:%2] %3")
                              .arg(sender.toString())
                              .arg(senderPort)
                              .arg(QString::fromUtf8(datagram));

        ui->listWidget->addItem(mensaje);
    }
}
