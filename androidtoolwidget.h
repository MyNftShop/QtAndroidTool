#ifndef ANDROIDTOOLWIDGET_H
#define ANDROIDTOOLWIDGET_H

#include <QWidget>

namespace Ui {
class AndroidToolWidget;
}

class AndroidToolWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AndroidToolWidget(QWidget *parent = 0);
    ~AndroidToolWidget();

private:
    Ui::AndroidToolWidget *ui;
};

#endif // ANDROIDTOOLWIDGET_H
