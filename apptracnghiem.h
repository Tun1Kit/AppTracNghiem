#ifndef APPTRACNGHIEM_H
#define APPTRACNGHIEM_H

#include <QDialog>
#include "Hethong.h"
#include "lop_gv.h"

QT_BEGIN_NAMESPACE
namespace Ui { class dangNhapUI; }
QT_END_NAMESPACE

class AppTracNghiem : public QDialog
{
    Q_OBJECT

public:
    explicit AppTracNghiem(QWidget *parent = nullptr);
    ~AppTracNghiem();

private slots:
    void on_login_clicked();
    void on_login_Index_clicked();
    void on_quenMK_clicked();
    void on_quenMK_Index_clicked();

private:
    Ui::dangNhapUI *ui;
    Hethong* hethong;  // Đối tượng Hethong để quản lý thông tin sinh viên
    lop_GV *giaoDienGiaoVien;
};

#endif // APPTRACNGHIEM_H
