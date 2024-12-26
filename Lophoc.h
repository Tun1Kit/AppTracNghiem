#ifndef LOPHOC_H
#define LOPHOC_H
#define MAX 10000

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include "Hethong.h"

class LopHoc {
public:
    QString maLop;
    QString tenLop;
    int soLuongSinhVien;
    User* danhSachSinhVien;

    LopHoc(const QString& maLop, const QString& tenLop, int soLuongSinhVien = 0)
        : maLop(maLop), tenLop(tenLop), soLuongSinhVien(soLuongSinhVien), danhSachSinhVien(nullptr) {}

    void themSinhVien(const QString& maSV, const QString& hoten, const QString& gioitinh);
    void inDanhSachSinhVien();
    bool kiemTraSinhVienTonTai(const QString& maSV);
};

class HethongLop {
public:
    LopHoc** danhSachLop;  // Mảng con trỏ chứa các lớp học
    int soLuongLop;        // Số lượng lớp học hiện tại
    int capNhatSize;       // Kích thước tối đa của mảng

    HethongLop();
    ~HethongLop();

    void napDuLieuLop(const QString& filePath);
    void ghiDuLieuLop(const QString& filePath);
    LopHoc* timLopHoc(const QString& maLop);
    void themSinhVienVaoLop(LopHoc* lop, const QString& maSV, const QString& hoten, const QString& phai);
    bool kiemTraLopTonTai(const QString& maLop);
    bool kiemTraSinhVienThuocLopNao(const QString& maSV);
    bool timSinhVienTrongLop(LopHoc* lop, const QString& maSV);
    void themLopHoc(LopHoc* lop);
};

#endif
