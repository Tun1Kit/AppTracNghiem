#include "TreeMonHoc.h"
#include <QTextStream>
#include <QMessageBox>

NodeMH* TreeMonHoc::quayTrai(NodeMH* y) {
    NodeMH* x = y->right;
    y->right = x->left;
    x->left = y;
    y->height = std::max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = std::max(getHeight(x->left), getHeight(x->right)) + 1;
    return x;
}

NodeMH* TreeMonHoc::quayPhai(NodeMH* x) {
    NodeMH* y = x->left;
    x->left = y->right;
    y->right = x;
    x->height = std::max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = std::max(getHeight(y->left), getHeight(y->right)) + 1;
    return y;
}

int TreeMonHoc::getHeight(NodeMH* node) {
    return node ? node->height : 0;
}

int TreeMonHoc::getBalance(NodeMH* node) {
    return node ? getHeight(node->left) - getHeight(node->right) : 0;
}

NodeMH* TreeMonHoc::themMonHoc(NodeMH* node, const MonHoc& mh) {
    if (!node) return new NodeMH(mh);
    if (mh.maMH < node->data.maMH) node->left = themMonHoc(node->left, mh);
    else if (mh.maMH > node->data.maMH) node->right = themMonHoc(node->right, mh);
    else return node;

    node->height = 1 + std::max(getHeight(node->left), getHeight(node->right));

    int balance = getBalance(node);
    if (balance > 1 && mh.maMH < node->left->data.maMH) return quayPhai(node);
    if (balance < -1 && mh.maMH > node->right->data.maMH) return quayTrai(node);
    if (balance > 1 && mh.maMH > node->left->data.maMH) { node->left = quayTrai(node->left); return quayPhai(node); }
    if (balance < -1 && mh.maMH < node->right->data.maMH) { node->right = quayPhai(node->right); return quayTrai(node); }

    return node;
}

void TreeMonHoc::themMonHoc(const MonHoc& mh) {
    root = themMonHoc(root, mh);
}

NodeMH* TreeMonHoc::timKiem(const QString& maMH) {
    NodeMH* curr = root;
    while (curr) {
        if (maMH < curr->data.maMH) curr = curr->left;
        else if (maMH > curr->data.maMH) curr = curr->right;
        else return curr;
    }
    return nullptr;
}

void TreeMonHoc::hieuChinhMonHoc() {
    QString maMH;
    QTextStream ts(stdin);
    maMH = ts.readLine();

    NodeMH* node = timKiem(maMH);
    if (node) {
        QString tenMH;
        tenMH = ts.readLine();
        node->data.tenMH = tenMH;
        QMessageBox::information(nullptr, "Thông báo", "Đã hiệu chỉnh môn học.");
    } else {
        QMessageBox::warning(nullptr, "Thông báo", "Không tìm thấy môn học.");
    }
}
