#include "Hethong.h"

// Constructor
Hethong::Hethong() : head(nullptr) {}

// Destructor
Hethong::~Hethong() {
    while (head != nullptr) {
        User* temp = head;
        head = head->next;
        delete temp;
    }
}

void Hethong::napDuLieuSV(const QString& filePath) {
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Không thể mở file:" << filePath;
        return;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(":");
        if (fields.size() != 4) continue;

        QString maSV = fields[0];
        QString password = fields[1];
        QString hoten = fields[2];
        QString phai = fields[3];

        User* newUser = new User(maSV, hoten, phai, password);
        newUser->next = head;
        head = newUser;
    }

    file.close();
    qDebug() << "Nạp dữ liệu từ file thành công.";
}

void Hethong::ghiDuLieuSV(const QString& filePath) {
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Không thể mở file để ghi:" << filePath;
        return;
    }

    QTextStream out(&file);
    User* current = head;
    while (current != nullptr) {
        out << current->maSV << ":" << current->password << ":" << current->hoten << ":" << current->phai << "\n";
        current = current->next;
    }

    file.close();
    qDebug() << "Ghi dữ liệu ra file thành công.";
}

User* Hethong::timKiemSinhVien(const QString& maSV) {
    User* current = head;
    while (current != nullptr) {
        if (current->maSV == maSV) {
            return current;
        }
        current = current->next;
    }
    return nullptr;
}

QString Hethong::dangNhap(const QString& enteredMaSV, const QString& enteredPassword) {
    if (enteredMaSV == "GV" && enteredPassword == "GV") {
        qDebug() << "Đăng nhập thành công với vai trò Giáo Viên!";
        return "Giáo viên";
    }

    User* user = timKiemSinhVien(enteredMaSV);
    if (user && user->password == enteredPassword) {
        qDebug() << "Đăng nhập thành công với vai trò Sinh Viên!";
        return "Sinh viên";
    }

    qDebug() << "Sai mã sinh viên hoặc mật khẩu.";
    return "";
}

bool Hethong::quenPassword(User* user, const QString& newPassword) {
    if (user) {
        user->password = newPassword;
        return true;
    }
    return false;
}

bool Hethong::kiemTraSinhVienTonTai(const QString& maSV) {
    return timKiemSinhVien(maSV) != nullptr;
}
