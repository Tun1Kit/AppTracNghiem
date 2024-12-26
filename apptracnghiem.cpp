#include "apptracnghiem.h"
#include "ui_apptracnghiem.h"
#include "Hethong.h"
#include <QMessageBox>
#include <QInputDialog>

AppTracNghiem::AppTracNghiem(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dangNhapUI)
{
    ui->setupUi(this);
    giaoDienGiaoVien = new lop_GV(this); // Tạo mới giao diện
    hethong = new Hethong();
    hethong->napDuLieuSV(":/extension/text/thongtin.txt");
    ui->das->setCurrentIndex(0);
}

AppTracNghiem::~AppTracNghiem()
{
    delete ui;
    delete hethong; // Giải phóng bộ nhớ
}

void AppTracNghiem::on_login_clicked(){
    QString enteredMaSV = ui->taikhoan->text();
    QString enteredPassword = ui->matkhau->text();

    QString role = hethong->dangNhap(enteredMaSV, enteredPassword);
    if (!role.isEmpty()) {
        QMessageBox::information(this, "Thành công", "Bạn đã đăng nhập thành công với vai trò: " + role);

        // Chuyển đến giao diện tương ứng
        if (role == "Giáo viên") {
            this->close();
            giaoDienGiaoVien->show();
       // } else {
            // Chuyển đến giao diện Sinh Viên
          //  giaoDienSinhVien->show();  // Đảm bảo bạn đã khởi tạo giaoDienSinhVien
       // }
       // this->hide(); // Đóng giao diện đăng nhập
    }
}        else {
        QMessageBox::warning(this, "Thất bại", "Sai Mã Sinh Viên hoặc Mật Khẩu. Vui lòng thử lại!");
        }

}

void AppTracNghiem::on_quenMK_clicked() {

    QString enteredMaSV = ui->taikhoan2->text();
    QString enteredHoten = ui->hoten->text();
    QString enteredPhai = ui->gioitinh->text();


    User* user = hethong->timKiemSinhVien(enteredMaSV);
    QMessageBox::information(this, "Thành công", "Thông Tin Sinh Viên Trùng Khớp!");
    if (user && user->hoten == enteredHoten && user->phai == enteredPhai) {

        bool ok;
        QString newPassword = QInputDialog::getText(this, "Thay đổi mật khẩu",
                                                    "Nhập mật khẩu mới:",
                                                    QLineEdit::Password, "", &ok);
        if (ok && !newPassword.isEmpty()) {

            if (hethong->quenPassword(user, newPassword)) {
                hethong->ghiDuLieuSV("C:/Project/untitled/text/thongtin.txt");
                QMessageBox::information(this, "Thành công", "Mật khẩu đã được thay đổi thành công!");
            } else {
                QMessageBox::warning(this, "Lỗi", "Không thể thay đổi mật khẩu. Vui lòng thử lại.");
            }
        }
    } else {
        QMessageBox::warning(this, "Thất bại", "Thông tin không khớp. Vui lòng kiểm tra lại.");
    }
}



void AppTracNghiem::on_quenMK_Index_clicked()
{
    ui->das->setCurrentIndex(1);
}


void AppTracNghiem::on_login_Index_clicked()
{
    ui->das->setCurrentIndex(0);
}

