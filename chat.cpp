#include "chat.h"
#include "ui_chat.h"

chat::chat(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::chat)
{
    ui->setupUi(this);
}

chat::~chat()
{
    delete ui;
}

void chat::on_pushButtonsubmit_clicked()
{
    ui->plainTextEdit_Chat->setPlainText("");
    ui->labelsubmitclicked->setText("<font color='blue'>Your message is sent to the Admin. Expect a call very soon</font>");

}

