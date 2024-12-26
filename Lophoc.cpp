#include "lophoc.h"

// Constructor
HethongLop::HethongLop() : soLuongLop(0), capNhatSize(MAX) {
    danhSachLop = new LopHoc*[capNhatSize];
}

HethongLop::~HethongLop() {
    for (int i = 0; i < soLuongLop; ++i) {
        delete danhSachLop[i];
    }
    delete[] danhSachLop;
}

// Nạp dữ liệu lớp từ file
void HethongLop::napDuLieuLop(const QString& filePath) {
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Không thể mở file lớp học:" << filePath;
        return;
    }

    QTextStream in(&file);
    LopHoc* currentLop = nullptr;

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(":");

        // Kiểm tra nếu dòng là thông tin lớp học (3 phần) và có dấu '-'
        if (fields.size() == 3 && fields[0].contains("-")) {
            QString maLop = fields[0].trimmed();
            QString tenLop = fields[1].trimmed();
            int soLuongSinhVien = fields[2].trimmed().toInt();

            // Tạo lớp học mới và lưu vào hệ thống
            currentLop = new LopHoc(maLop, tenLop, soLuongSinhVien);
            themLopHoc(currentLop);  // Giả sử có hàm themLopHoc
            continue;
        }

        // Kiểm tra nếu dòng là thông tin sinh viên (3 phần) và có lớp học đang làm việc
        if (fields.size() == 3 && currentLop != nullptr && !fields[0].contains("-")) {
            QString maSV = fields[0].trimmed();
            QString hoten = fields[1].trimmed();
            QString phai = fields[2].trimmed();

            // Thêm sinh viên vào lớp học
            User* newSinhVien = new User(maSV, hoten, phai, "");
            newSinhVien->next = currentLop->danhSachSinhVien;
            currentLop->danhSachSinhVien = newSinhVien;
            currentLop->soLuongSinhVien++;
        }
    }

    file.close();
    qDebug() << "Nạp dữ liệu lớp học từ file hoàn tất.";
}

// Ghi dữ liệu lớp và sinh viên ra file
void HethongLop::ghiDuLieuLop(const QString& filePath) {
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Không thể mở file để ghi:" << filePath;
        return;
    }

    QTextStream out(&file);

    for (int i = 0; i < soLuongLop; ++i) {
        LopHoc* currentLop = danhSachLop[i];

        // Ghi thông tin lớp học
        out << currentLop->maLop << ": " << currentLop->tenLop << ": "
            << currentLop->soLuongSinhVien << "\n";

        // Ghi thông tin sinh viên
        User* currentSinhVien = currentLop->danhSachSinhVien;
        while (currentSinhVien != nullptr) {
            out << currentSinhVien->maSV << ":" << currentSinhVien->hoten
                << ":" << currentSinhVien->phai << "\n";
            currentSinhVien = currentSinhVien->next;
        }
    }

    file.close();
    qDebug() << "Ghi dữ liệu lớp học ra file hoàn tất.";
}

// Kiểm tra lớp có tồn tại không
bool HethongLop::kiemTraLopTonTai(const QString& maLop) {
    for (int i = 0; i < soLuongLop; ++i) {
        if (danhSachLop[i]->maLop == maLop) {
            return true;
        }
    }
    return false;
}

// Kiểm tra sinh viên có tồn tại trong lớp không
bool LopHoc::kiemTraSinhVienTonTai(const QString& maSV) {
    User* current = danhSachSinhVien;
    while (current != nullptr) {
        if (current->maSV == maSV) {
            return true;
        }
        current = current->next;
    }
    return false;
}

// Thêm sinh viên vào lớp
void HethongLop::themSinhVienVaoLop(LopHoc* lop, const QString& maSV, const QString& hoten, const QString& phai) {
    User* newSinhVien = new User(maSV, hoten, phai, "");
    newSinhVien->next = lop->danhSachSinhVien;
    lop->danhSachSinhVien = newSinhVien;

    qDebug() << "Thêm sinh viên vào lớp thành công.";
}

// In danh sách sinh viên trong lớp
void LopHoc::inDanhSachSinhVien() {
    User* current = danhSachSinhVien;
    while (current != nullptr) {
        qDebug() << "Mã SV: " << current->maSV << ", Họ tên: " << current->hoten << ", Giới tính: " << current->phai;
        current = current->next;
    }
}

// Thêm lớp học vào mảng danh sách lớp
void HethongLop::themLopHoc(LopHoc* lop) {
    if (soLuongLop >= capNhatSize) {
        capNhatSize *= 2;  // Tăng kích thước mảng khi đầy
        LopHoc** newDanhSachLop = new LopHoc*[capNhatSize];
        for (int i = 0; i < soLuongLop; ++i) {
            newDanhSachLop[i] = danhSachLop[i];
        }
        delete[] danhSachLop;
        danhSachLop = newDanhSachLop;
    }

    danhSachLop[soLuongLop++] = lop;
    qDebug() << "Thêm lớp học " << lop->tenLop << " thành công.";
}

// Tìm sinh viên trong lớp
bool HethongLop::timSinhVienTrongLop(LopHoc* lop, const QString& maSV) {
    User* current = lop->danhSachSinhVien;
    while (current != nullptr) {
        if (current->maSV == maSV) {
            return true;
        }
        current = current->next;
    }
    return false;
}
