// hethong.h
#ifndef HETHONG_H
#define HETHONG_H

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QDebug>

class User {
public:
    QString maSV;
    QString hoten;
    QString phai;
    QString password;
    User* next;

    User(const QString& maSV, const QString& hoten, const QString& phai, const QString& password)
        : maSV(maSV), hoten(hoten), phai(phai), password(password), next(nullptr) {}
};

class Hethong {
public:
    User* head;
    Hethong();
    ~Hethong();

    void napDuLieuSV(const QString& filePath);
    void ghiDuLieuSV(const QString& filePath);
    QString dangNhap(const QString& enteredMaSV, const QString& enteredPassword);
    bool quenPassword(User* user, const QString& newPassword);
    User* timKiemSinhVien(const QString& maSV);
    bool kiemTraSinhVienTonTai(const QString& maSV);
};

#endif
