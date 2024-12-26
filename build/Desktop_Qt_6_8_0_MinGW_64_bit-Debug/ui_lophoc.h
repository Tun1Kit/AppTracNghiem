/********************************************************************************
** Form generated from reading UI file 'lophoc.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOPHOC_H
#define UI_LOPHOC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *loginLabel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1920, 1080);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #7F7F7F;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        loginLabel = new QLabel(centralwidget);
        loginLabel->setObjectName("loginLabel");
        loginLabel->setGeometry(QRect(960, -10, 370, 101));
        QFont font;
        font.setFamilies({QString::fromUtf8("VNI-Hobo")});
        font.setPointSize(55);
        font.setBold(false);
        loginLabel->setFont(font);
        loginLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        loginLabel->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color:rgb(255, 255, 255)"));
        loginLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        loginLabel->setText(QCoreApplication::translate("MainWindow", "CLASS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOPHOC_H
