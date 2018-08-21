/********************************************************************************
** Form generated from reading UI file 'g9_control.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_G9_CONTROL_H
#define UI_G9_CONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_g9_control
{
public:
    QSlider *verticalSlider;
    QSlider *verticalSlider_2;
    QSlider *verticalSlider_3;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;
    QRadioButton *radioButton;

    void setupUi(QWidget *g9_control)
    {
        if (g9_control->objectName().isEmpty())
            g9_control->setObjectName(QStringLiteral("g9_control"));
        g9_control->resize(957, 638);
        verticalSlider = new QSlider(g9_control);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(160, 30, 151, 531));
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider_2 = new QSlider(g9_control);
        verticalSlider_2->setObjectName(QStringLiteral("verticalSlider_2"));
        verticalSlider_2->setGeometry(QRect(770, 30, 191, 531));
        verticalSlider_2->setOrientation(Qt::Vertical);
        verticalSlider_3 = new QSlider(g9_control);
        verticalSlider_3->setObjectName(QStringLiteral("verticalSlider_3"));
        verticalSlider_3->setGeometry(QRect(480, 30, 161, 531));
        verticalSlider_3->setOrientation(Qt::Vertical);
        lcdNumber = new QLCDNumber(g9_control);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(90, 30, 64, 23));
        lcdNumber_2 = new QLCDNumber(g9_control);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(410, 30, 64, 23));
        lcdNumber_3 = new QLCDNumber(g9_control);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));
        lcdNumber_3->setGeometry(QRect(690, 30, 64, 23));
        radioButton = new QRadioButton(g9_control);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(90, 210, 85, 20));

        retranslateUi(g9_control);
        QObject::connect(verticalSlider, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(verticalSlider_3, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));
        QObject::connect(verticalSlider_2, SIGNAL(valueChanged(int)), lcdNumber_3, SLOT(display(int)));

        QMetaObject::connectSlotsByName(g9_control);
    } // setupUi

    void retranslateUi(QWidget *g9_control)
    {
        g9_control->setWindowTitle(QApplication::translate("g9_control", "g9_control", Q_NULLPTR));
        radioButton->setText(QApplication::translate("g9_control", "Connect", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class g9_control: public Ui_g9_control {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_G9_CONTROL_H
