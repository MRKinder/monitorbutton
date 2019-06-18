#include "monitorbuttons.h"
#include <wiringPi.h>
#include <QTimer>

monitorbuttons::monitorbuttons(QWidget *parent) :
    QWidget(parent)
{
    setupUi(this);
    wiringPiSetupGpio();
    pinMode(B1, INPUT);
    pinMode(B2, INPUT);
    pinMode(B3, INPUT);
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(art()));
    timer->start(200);
}

void monitorbuttons::art(){
    int button1 = !digitalRead(B1);
    int button2 = !digitalRead(B2);
    int button3 = !digitalRead(B3);


    but2->setText(" Button2 = " + QString::number(button2));
    but3->setText(" Button3 = " + QString::number(button3));

    if(button1 == 1){
        but1->setStyleSheet("background-color: rgb(255, 0, 0);");
        but1->setText(" Button1 = 1");
    }
    else{
        but1->setStyleSheet("background-color: black;");
        but1->setText(" Button1 = 0");
    };
    if(button2 == 1){
        but2->setStyleSheet("background-color: rgb(255, 0, 0);");
        but2->setText(" Button2 = 1");
    }
    else{
        but2->setStyleSheet("background-color: black;");
        but2->setText(" Button2 = 0");
    };
    if(button3 == 1){
        but3->setStyleSheet("background-color: rgb(255, 0, 0);");
        but3->setText(" Button3 = 1");
    }
    else{
        but3->setStyleSheet("background-color: black;");
        but3->setText(" Button3 = 0");
    };
}
