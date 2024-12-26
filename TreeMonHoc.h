#ifndef TREE_MONHOC_H
#define TREE_MONHOC_H

#include <QString>

class MonHoc {
public:
    QString maMH, tenMH;
    MonHoc(const QString& ma, const QString& ten) : maMH(ma), tenMH(ten) {}
};

class NodeMH {
public:
    MonHoc data;
    NodeMH* left;
    NodeMH* right;
    int height;
    NodeMH(const MonHoc& mh) : data(mh), left(nullptr), right(nullptr), height(1) {}
};

class TreeMonHoc {
public:
    NodeMH* root;
    TreeMonHoc() : root(nullptr) {}

    void themMonHoc(const MonHoc& mh);
    void hieuChinhMonHoc();
    NodeMH* timKiem(const QString& maMH);

private:
    NodeMH* themMonHoc(NodeMH* node, const MonHoc& mh);
    NodeMH* quayTrai(NodeMH* y);
    NodeMH* quayPhai(NodeMH* x);
    int getHeight(NodeMH* node);
    int getBalance(NodeMH* node);
};

#endif // TREE_MONHOC_H
