#ifndef LOP_GV_H
#define LOP_GV_H

#include <QMainWindow>
#include <QTableWidgetItem>  // Để sử dụng QTableWidgetItem
#include "Lophoc.h"  // Đảm bảo file này có định nghĩa LopHoc
#include "Hethong.h"  // Đảm bảo file này có định nghĩa HethongLop và các lớp liên quan

namespace Ui {
class lop_GV;
}

class lop_GV : public QMainWindow
{
    Q_OBJECT

public:
    explicit lop_GV(QWidget *parent = nullptr);
    ~lop_GV();

private:
    Ui::lop_GV *ui;

    // Phương thức để hiển thị danh sách sinh viên trong bảng
    void hienThiDanhSachSinhVien();
};

#endif // LOP_GV_H
