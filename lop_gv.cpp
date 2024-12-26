#include "lop_gv.h"
#include "ui_lop_gv.h"
#include <QLineEdit>

lop_GV::lop_GV(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::lop_GV)
{
    ui->setupUi(this);

    this->setWindowState(Qt::WindowMaximized);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionsMovable(false);


// Gọi hàm để hiển thị danh sách sinh viên
    hienThiDanhSachSinhVien();
}

// Destructor
lop_GV::~lop_GV()
{
    delete ui;
}

// Hàm hiển thị danh sách sinh viên vào QTableWidget
void lop_GV::hienThiDanhSachSinhVien()
{
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    HethongLop hth;
    hth.napDuLieuLop("C:/Project/untitled/text/lophoc.txt");

    // Duyệt qua các lớp học trong hệ thống
    int row = 0;
    for (int i = 0; i < hth.soLuongLop; ++i) {
        LopHoc* lop = hth.danhSachLop[i];

        // Duyệt qua danh sách sinh viên trong lớp
        User* sinhVien = lop->danhSachSinhVien;
        while (sinhVien != nullptr) {
            ui->tableWidget->insertRow(row); // Thêm dòng mới

            // Cập nhật từng cột
            ui->tableWidget->setItem(row, 0, new QTableWidgetItem(sinhVien->maSV)); // Mã SV
            ui->tableWidget->setItem(row, 1, new QTableWidgetItem(sinhVien->hoten));  // Họ Tên
            ui->tableWidget->setItem(row, 2, new QTableWidgetItem(sinhVien->phai));   // Giới Tính
            ui->tableWidget->setItem(row, 3, new QTableWidgetItem(lop->maLop));      // Mã Lớp
            ui->tableWidget->setItem(row, 4, new QTableWidgetItem(lop->tenLop));     // Tên Lớp

            row++;
            qDebug() << sinhVien->maSV << sinhVien->hoten << sinhVien->phai << lop->maLop << lop->tenLop;
            sinhVien = sinhVien->next; // Di chuyển tới sinh viên kế tiếp

        }
    }
}

