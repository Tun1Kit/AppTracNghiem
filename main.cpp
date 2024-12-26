#include <QApplication>
#include <QMainWindow>
#include "Hethong.h"
#include "apptracnghiem.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    AppTracNghiem loginDlg;
    loginDlg.show();
    return app.exec();
}
