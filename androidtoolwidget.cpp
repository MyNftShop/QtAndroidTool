#include "androidtoolwidget.h"
#include "ui_androidtoolwidget.h"

AndroidToolWidget::AndroidToolWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AndroidToolWidget)
{
    ui->setupUi(this);
}

AndroidToolWidget::~AndroidToolWidget()
{
    delete ui;
}
