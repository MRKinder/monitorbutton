#ifndef MONITORBUTTONS_H
#define MONITORBUTTONS_H

#include "ui_monitorbuttons.h"

#define B1 17
#define B2 27
#define B3 22

class monitorbuttons : public QWidget, private Ui::monitorbuttons
{
    Q_OBJECT

public:
    explicit monitorbuttons(QWidget *parent = 0);
private slots:
    void art();
};

#endif // MONITORBUTTONS_H
