/********************************************************************************
** Form generated from reading UI file 'lop_gv.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOP_GV_H
#define UI_LOP_GV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lop_GV
{
public:
    QWidget *centralwidget;
    QLabel *classMaLabel;
    QLineEdit *lineEdit;
    QTableWidget *tableWidget;
    QPushButton *addSV;
    QPushButton *delSV;
    QPushButton *quenMK_3;

    void setupUi(QMainWindow *lop_GV)
    {
        if (lop_GV->objectName().isEmpty())
            lop_GV->setObjectName("lop_GV");
        lop_GV->resize(1920, 1080);
        lop_GV->setStyleSheet(QString::fromUtf8("background-color: #7F7F7F;"));
        centralwidget = new QWidget(lop_GV);
        centralwidget->setObjectName("centralwidget");
        classMaLabel = new QLabel(centralwidget);
        classMaLabel->setObjectName("classMaLabel");
        classMaLabel->setGeometry(QRect(400, -2, 781, 101));
        QFont font;
        font.setFamilies({QString::fromUtf8("VNI-Hobo")});
        font.setPointSize(55);
        font.setBold(false);
        classMaLabel->setFont(font);
        classMaLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        classMaLabel->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color:rgb(255, 255, 255)"));
        classMaLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(600, 120, 321, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: 3px solid rgb(199, 199, 199);\n"
"border-radius: 8px; \n"
"padding-right: 2px;"));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Verdana")});
        font1.setPointSize(30);
        font1.setKerning(false);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Verdana")});
        font2.setPointSize(30);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font2);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font2);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font2);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font2);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(6, 174, 1251, 611));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Verdana")});
        font3.setPointSize(1);
        tableWidget->setFont(font3);
        tableWidget->setAutoFillBackground(true);
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"        background-color: rgb(211, 211, 211);\n"
"        gridline-color: #e0e0e0;   /* \304\220\306\260\341\273\235ng k\341\272\273 l\306\260\341\273\233i: x\303\241m nh\341\272\241t */\n"
"        border: 2px solid rgb(113, 113, 113);\n"
"padding: 3px;\n"
"    }\n"
"\n"
"    QHeaderView::section {\n"
"        background-color: rgb(49, 49, 49); /* N\341\273\201n header: xanh d\306\260\306\241ng hi\341\273\207n \304\221\341\272\241i */\n"
"        color: #ffffff;            /* Ch\341\273\257 header: tr\341\272\257ng n\341\273\225i b\341\272\255t */\n"
"        border: 1px solid rgb(0, 0, 0); /* Vi\341\273\201n gi\341\273\257a c\303\241c ph\341\272\247n header: xanh d\306\260\306\241ng \304\221\341\272\255m */\n"
"        padding: 6px;              /* Kho\341\272\243ng c\303\241ch trong header: r\341\273\231ng r\303\243i */\n"
"font-size: 25px;\n"
"    }\n"
"QTableWidget:hover {\n"
"    border: 2px solid rgb(67, 67, 67);\n"
"}\n"
"\n"
"QTableWidget:focus {\n"
"    border: 2px solid rgb(0, 0, "
                        "0);\n"
"}"));
        tableWidget->setInputMethodHints(Qt::InputMethodHint::ImhNoEditMenu);
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        tableWidget->setAutoScroll(false);
        tableWidget->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableWidget->setTabKeyNavigation(false);
        tableWidget->setProperty("showDropIndicator", QVariant(false));
        tableWidget->setDragDropOverwriteMode(false);
        tableWidget->setCornerButtonEnabled(false);
        tableWidget->horizontalHeader()->setVisible(true);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(200);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->verticalHeader()->setStretchLastSection(false);
        addSV = new QPushButton(centralwidget);
        addSV->setObjectName("addSV");
        addSV->setGeometry(QRect(1280, 280, 241, 101));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Verdana")});
        font4.setPointSize(15);
        addSV->setFont(font4);
        addSV->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:  rgb(255, 255, 255);\n"
"    border: none; /* Kh\303\264ng c\303\263 vi\341\273\201n */\n"
"    color: rgb(0, 0, 0); /* M\303\240u ch\341\273\257 tr\341\272\257ng */\n"
"    padding: 10px 20px; /* Kho\341\272\243ng c\303\241ch b\303\252n trong n\303\272t */\n"
"    text-align: center; /* Canh gi\341\273\257a ch\341\273\257 */\n"
"    border-radius: 8px; /* Bo g\303\263c */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049; /* M\303\240u n\341\273\201n khi di chu\341\273\231t */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #388e3c; /* M\303\240u n\341\273\201n khi n\303\272t \304\221\306\260\341\273\243c nh\341\272\245n */\n"
"}"));
        delSV = new QPushButton(centralwidget);
        delSV->setObjectName("delSV");
        delSV->setGeometry(QRect(1280, 440, 241, 101));
        delSV->setFont(font4);
        delSV->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:  rgb(255, 255, 255);\n"
"    border: none; /* Kh\303\264ng c\303\263 vi\341\273\201n */\n"
"    color: rgb(0, 0, 0); /* M\303\240u ch\341\273\257 tr\341\272\257ng */\n"
"    padding: 10px 20px; /* Kho\341\272\243ng c\303\241ch b\303\252n trong n\303\272t */\n"
"    text-align: center; /* Canh gi\341\273\257a ch\341\273\257 */\n"
"    border-radius: 8px; /* Bo g\303\263c */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(255, 56, 56);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(255, 0, 0);\n"
"}"));
        quenMK_3 = new QPushButton(centralwidget);
        quenMK_3->setObjectName("quenMK_3");
        quenMK_3->setGeometry(QRect(1280, 600, 241, 101));
        quenMK_3->setFont(font4);
        quenMK_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:  rgb(255, 255, 255);\n"
"    border: none; /* Kh\303\264ng c\303\263 vi\341\273\201n */\n"
"    color: rgb(0, 0, 0); /* M\303\240u ch\341\273\257 tr\341\272\257ng */\n"
"    padding: 10px 20px; /* Kho\341\272\243ng c\303\241ch b\303\252n trong n\303\272t */\n"
"    text-align: center; /* Canh gi\341\273\257a ch\341\273\257 */\n"
"    border-radius: 8px; /* Bo g\303\263c */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(61, 203, 255);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(0, 81, 255);\n"
"}"));
        lop_GV->setCentralWidget(centralwidget);

        retranslateUi(lop_GV);

        QMetaObject::connectSlotsByName(lop_GV);
    } // setupUi

    void retranslateUi(QMainWindow *lop_GV)
    {
        lop_GV->setWindowTitle(QCoreApplication::translate("lop_GV", "MainWindow", nullptr));
        classMaLabel->setText(QCoreApplication::translate("lop_GV", "CLASS MANAGER", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("lop_GV", "M\303\243 Sinh Vi\303\252n", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("lop_GV", "H\341\273\215 v\303\240 T\303\252n", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("lop_GV", "Gi\341\273\233i T\303\255nh", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("lop_GV", "M\303\243 L\341\273\233p", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("lop_GV", "T\303\252n L\341\273\233p", nullptr));
        addSV->setText(QCoreApplication::translate("lop_GV", "Th\303\252m Sinh Vi\303\252n", nullptr));
        delSV->setText(QCoreApplication::translate("lop_GV", "X\303\263a Sinh Vi\303\252n", nullptr));
        quenMK_3->setText(QCoreApplication::translate("lop_GV", "Ch\341\273\211nh S\341\273\255a", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lop_GV: public Ui_lop_GV {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOP_GV_H
