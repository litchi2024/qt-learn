#ifndef WIDGET_H
#define WIDGET_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { // 命名空间
class Widget;
}
QT_END_NAMESPACE

class Widget : public QMainWindow
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr); // 构建函数
    ~Widget(); // 析勾函数

private:
    Ui::Widget *ui; // 使用UI::Widget类定义的一个对象指针
};
#endif // WIDGET_H
