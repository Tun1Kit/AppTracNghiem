/********************************************************************************
** Form generated from reading UI file 'apptracnghiem.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPTRACNGHIEM_H
#define UI_APPTRACNGHIEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dangNhapUI
{
public:
    QStackedWidget *das;
    QWidget *loginPage;
    QLabel *classMaLabel;
    QLineEdit *taikhoan;
    QLineEdit *matkhau;
    QPushButton *login;
    QPushButton *quenMK_Index;
    QLabel *label_2;
    QWidget *quenMKPage;
    QLabel *classMaLabel_2;
    QLineEdit *taikhoan2;
    QLineEdit *hoten;
    QLineEdit *gioitinh;
    QPushButton *quenMK;
    QPushButton *login_Index;
    QLabel *label;

    void setupUi(QDialog *dangNhapUI)
    {
        if (dangNhapUI->objectName().isEmpty())
            dangNhapUI->setObjectName("dangNhapUI");
        dangNhapUI->resize(485, 583);
        dangNhapUI->setStyleSheet(QString::fromUtf8("background-color: #7F7F7F;"));
        das = new QStackedWidget(dangNhapUI);
        das->setObjectName("das");
        das->setGeometry(QRect(0, 0, 485, 583));
        loginPage = new QWidget();
        loginPage->setObjectName("loginPage");
        classMaLabel = new QLabel(loginPage);
        classMaLabel->setObjectName("classMaLabel");
        classMaLabel->setGeometry(QRect(100, -10, 281, 101));
        QFont font;
        font.setFamilies({QString::fromUtf8("VNI-Hobo")});
        font.setPointSize(55);
        font.setBold(false);
        classMaLabel->setFont(font);
        classMaLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        classMaLabel->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color:rgb(255, 255, 255)"));
        classMaLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        taikhoan = new QLineEdit(loginPage);
        taikhoan->setObjectName("taikhoan");
        taikhoan->setGeometry(QRect(105, 220, 271, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Verdana")});
        font1.setPointSize(12);
        taikhoan->setFont(font1);
        taikhoan->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: rgb(121, 121, 121); /* N\341\273\201n x\303\241m */\n"
"    border-radius: 5px; /* Bo g\303\263c */\n"
"    padding-bottom: 2px; /* Kho\341\272\243ng c\303\241ch ph\303\255a d\306\260\341\273\233i */\n"
"    padding-top: 3px; /* Kho\341\272\243ng c\303\241ch ph\303\255a tr\303\252n */\n"
"    padding-left: 6px; /* Kho\341\272\243ng c\303\241ch b\303\252n tr\303\241i */\n"
"    border-bottom: 1px solid rgb(145, 145, 145); /* Vi\341\273\201n d\306\260\341\273\233i m\303\240u x\303\241m nh\341\272\241t */\n"
"    color: rgb(0, 0, 0); /* M\303\240u ch\341\273\257 \304\221en */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-bottom: 2px solid rgb(0, 122, 204); /* Thay \304\221\341\273\225i vi\341\273\201n d\306\260\341\273\233i khi c\303\263 focus */\n"
"}"));
        matkhau = new QLineEdit(loginPage);
        matkhau->setObjectName("matkhau");
        matkhau->setGeometry(QRect(105, 280, 271, 51));
        matkhau->setFont(font1);
        matkhau->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: rgb(121, 121, 121); /* N\341\273\201n x\303\241m */\n"
"    border-radius: 5px; /* Bo g\303\263c */\n"
"    padding-bottom: 2px; /* Kho\341\272\243ng c\303\241ch ph\303\255a d\306\260\341\273\233i */\n"
"    padding-top: 3px; /* Kho\341\272\243ng c\303\241ch ph\303\255a tr\303\252n */\n"
"    padding-left: 6px; /* Kho\341\272\243ng c\303\241ch b\303\252n tr\303\241i */\n"
"    border-bottom: 1px solid rgb(145, 145, 145); /* Vi\341\273\201n d\306\260\341\273\233i m\303\240u x\303\241m nh\341\272\241t */\n"
"    color: rgb(0, 0, 0); /* M\303\240u ch\341\273\257 \304\221en */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-bottom: 2px solid rgb(0, 122, 204); /* Thay \304\221\341\273\225i vi\341\273\201n d\306\260\341\273\233i khi c\303\263 focus */\n"
"}"));
        matkhau->setEchoMode(QLineEdit::EchoMode::Password);
        login = new QPushButton(loginPage);
        login->setObjectName("login");
        login->setGeometry(QRect(169, 350, 151, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Verdana")});
        font2.setPointSize(11);
        login->setFont(font2);
        login->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        quenMK_Index = new QPushButton(loginPage);
        quenMK_Index->setObjectName("quenMK_Index");
        quenMK_Index->setGeometry(QRect(341, 357, 121, 29));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Verdana")});
        font3.setPointSize(9);
        font3.setUnderline(true);
        quenMK_Index->setFont(font3);
        quenMK_Index->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* Kh\303\264ng c\303\263 n\341\273\201n */\n"
"    color: white; /* M\303\240u ch\341\273\257 tr\341\272\257ng */\n"
"    text-align: center; /* Canh gi\341\273\257a ch\341\273\257 */\n"
"    border: none; /* Kh\303\264ng c\303\263 vi\341\273\201n m\341\272\267c \304\221\341\273\213nh */\n"
"    text-decoration: underline;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    color: red; /* N\341\273\201n \304\221\341\273\217 khi n\303\272t \304\221\306\260\341\273\243c nh\341\272\245n */\n"
"}\n"
""));
        label_2 = new QLabel(loginPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(173, 560, 195, 20));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        label_2->setFont(font4);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(102, 102, 102);"));
        das->addWidget(loginPage);
        quenMKPage = new QWidget();
        quenMKPage->setObjectName("quenMKPage");
        classMaLabel_2 = new QLabel(quenMKPage);
        classMaLabel_2->setObjectName("classMaLabel_2");
        classMaLabel_2->setGeometry(QRect(65, -10, 361, 101));
        classMaLabel_2->setFont(font);
        classMaLabel_2->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        classMaLabel_2->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color:rgb(255, 255, 255)"));
        classMaLabel_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        taikhoan2 = new QLineEdit(quenMKPage);
        taikhoan2->setObjectName("taikhoan2");
        taikhoan2->setGeometry(QRect(105, 210, 271, 51));
        taikhoan2->setFont(font1);
        taikhoan2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: rgb(121, 121, 121); /* N\341\273\201n x\303\241m */\n"
"    border-radius: 5px; /* Bo g\303\263c */\n"
"    padding-bottom: 2px; /* Kho\341\272\243ng c\303\241ch ph\303\255a d\306\260\341\273\233i */\n"
"    padding-top: 3px; /* Kho\341\272\243ng c\303\241ch ph\303\255a tr\303\252n */\n"
"    padding-left: 6px; /* Kho\341\272\243ng c\303\241ch b\303\252n tr\303\241i */\n"
"    border-bottom: 1px solid rgb(145, 145, 145); /* Vi\341\273\201n d\306\260\341\273\233i m\303\240u x\303\241m nh\341\272\241t */\n"
"    color: rgb(0, 0, 0); /* M\303\240u ch\341\273\257 \304\221en */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-bottom: 2px solid rgb(0, 122, 204); /* Thay \304\221\341\273\225i vi\341\273\201n d\306\260\341\273\233i khi c\303\263 focus */\n"
"}"));
        hoten = new QLineEdit(quenMKPage);
        hoten->setObjectName("hoten");
        hoten->setGeometry(QRect(105, 270, 270, 51));
        hoten->setFont(font1);
        hoten->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: rgb(121, 121, 121); /* N\341\273\201n x\303\241m */\n"
"    border-radius: 5px; /* Bo g\303\263c */\n"
"    padding-bottom: 2px; /* Kho\341\272\243ng c\303\241ch ph\303\255a d\306\260\341\273\233i */\n"
"    padding-top: 3px; /* Kho\341\272\243ng c\303\241ch ph\303\255a tr\303\252n */\n"
"    padding-left: 6px; /* Kho\341\272\243ng c\303\241ch b\303\252n tr\303\241i */\n"
"    border-bottom: 1px solid rgb(145, 145, 145); /* Vi\341\273\201n d\306\260\341\273\233i m\303\240u x\303\241m nh\341\272\241t */\n"
"    color: rgb(0, 0, 0); /* M\303\240u ch\341\273\257 \304\221en */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-bottom: 2px solid rgb(0, 122, 204); /* Thay \304\221\341\273\225i vi\341\273\201n d\306\260\341\273\233i khi c\303\263 focus */\n"
"}"));
        gioitinh = new QLineEdit(quenMKPage);
        gioitinh->setObjectName("gioitinh");
        gioitinh->setGeometry(QRect(105, 330, 270, 51));
        gioitinh->setFont(font1);
        gioitinh->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: rgb(121, 121, 121); /* N\341\273\201n x\303\241m */\n"
"    border-radius: 5px; /* Bo g\303\263c */\n"
"    padding-bottom: 2px; /* Kho\341\272\243ng c\303\241ch ph\303\255a d\306\260\341\273\233i */\n"
"    padding-top: 3px; /* Kho\341\272\243ng c\303\241ch ph\303\255a tr\303\252n */\n"
"    padding-left: 6px; /* Kho\341\272\243ng c\303\241ch b\303\252n tr\303\241i */\n"
"    border-bottom: 1px solid rgb(145, 145, 145); /* Vi\341\273\201n d\306\260\341\273\233i m\303\240u x\303\241m nh\341\272\241t */\n"
"    color: rgb(0, 0, 0); /* M\303\240u ch\341\273\257 \304\221en */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-bottom: 2px solid rgb(0, 122, 204); /* Thay \304\221\341\273\225i vi\341\273\201n d\306\260\341\273\233i khi c\303\263 focus */\n"
"}"));
        quenMK = new QPushButton(quenMKPage);
        quenMK->setObjectName("quenMK");
        quenMK->setGeometry(QRect(169, 396, 151, 41));
        quenMK->setFont(font2);
        quenMK->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        login_Index = new QPushButton(quenMKPage);
        login_Index->setObjectName("login_Index");
        login_Index->setGeometry(QRect(340, 402, 121, 29));
        login_Index->setFont(font3);
        login_Index->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* Kh\303\264ng c\303\263 n\341\273\201n */\n"
"    color: white; /* M\303\240u ch\341\273\257 tr\341\272\257ng */\n"
"    text-align: center; /* Canh gi\341\273\257a ch\341\273\257 */\n"
"    border: none; /* Kh\303\264ng c\303\263 vi\341\273\201n m\341\272\267c \304\221\341\273\213nh */\n"
"    text-decoration: underline;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    color: red; /* N\341\273\201n \304\221\341\273\217 khi n\303\272t \304\221\306\260\341\273\243c nh\341\272\245n */\n"
"}\n"
""));
        label = new QLabel(quenMKPage);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 560, 195, 20));
        label->setFont(font4);
        label->setStyleSheet(QString::fromUtf8("color: rgb(102, 102, 102);"));
        das->addWidget(quenMKPage);
        QWidget::setTabOrder(taikhoan, matkhau);
        QWidget::setTabOrder(matkhau, login);
        QWidget::setTabOrder(login, quenMK_Index);
        QWidget::setTabOrder(quenMK_Index, taikhoan2);
        QWidget::setTabOrder(taikhoan2, hoten);
        QWidget::setTabOrder(hoten, gioitinh);
        QWidget::setTabOrder(gioitinh, quenMK);
        QWidget::setTabOrder(quenMK, login_Index);

        retranslateUi(dangNhapUI);

        das->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(dangNhapUI);
    } // setupUi

    void retranslateUi(QDialog *dangNhapUI)
    {
        dangNhapUI->setWindowTitle(QCoreApplication::translate("dangNhapUI", "\341\273\250ng D\341\273\245ng Tr\341\272\257c Nghi\341\273\207m", nullptr));
        classMaLabel->setText(QCoreApplication::translate("dangNhapUI", "LOGIN", nullptr));
        taikhoan->setPlaceholderText(QCoreApplication::translate("dangNhapUI", "M\303\243 Sinh Vi\303\252n", nullptr));
        matkhau->setPlaceholderText(QCoreApplication::translate("dangNhapUI", "M\341\272\255t Kh\341\272\251u", nullptr));
        login->setText(QCoreApplication::translate("dangNhapUI", "\304\220\304\203ng Nh\341\272\255p", nullptr));
        quenMK_Index->setText(QCoreApplication::translate("dangNhapUI", "Qu\303\252n M\341\272\255t Kh\341\272\251u", nullptr));
        label_2->setText(QCoreApplication::translate("dangNhapUI", "PTIT CONTEST APPLICATION", nullptr));
        classMaLabel_2->setText(QCoreApplication::translate("dangNhapUI", "FORGOT", nullptr));
        taikhoan2->setPlaceholderText(QCoreApplication::translate("dangNhapUI", "M\303\243 Sinh Vi\303\252n", nullptr));
        hoten->setPlaceholderText(QCoreApplication::translate("dangNhapUI", "H\341\273\215 v\303\240 T\303\252n", nullptr));
        gioitinh->setPlaceholderText(QCoreApplication::translate("dangNhapUI", "Gi\341\273\233i T\303\255nh", nullptr));
        quenMK->setText(QCoreApplication::translate("dangNhapUI", "X\303\241c Nh\341\272\255n", nullptr));
        login_Index->setText(QCoreApplication::translate("dangNhapUI", "\304\220\304\203ng Nh\341\272\255p", nullptr));
        label->setText(QCoreApplication::translate("dangNhapUI", "PTIT CONTEST APPLICATION", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dangNhapUI: public Ui_dangNhapUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPTRACNGHIEM_H
