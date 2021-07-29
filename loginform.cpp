#include "loginform.h"
#include "ui_loginform.h"
#include <QDebug>
#include <QMessageBox>

LoginForm::LoginForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginForm)
{
    ui->setupUi(this);

    //单击登录按钮时 执行 LoginForm::login 槽函数(自定义)；单击退出按钮时 执行 LoginForm::close 槽函数(窗体的关闭函数，不用自己写)
    connect(ui->loginBtn, &QPushButton::clicked, this, &LoginForm::login);
    connect(ui->logoutBtn, &QPushButton::clicked, this, &LoginForm::close);

}

LoginForm::~LoginForm()
{
    delete ui;
}

void LoginForm::login()
{
    if (ui->userName->text() == "") {
        //提示输入错误
        QMessageBox::warning(this, tr("警告！"),tr("请输入用户名"), QMessageBox::Yes);
        return;
    }

    if (ui->userName->text().trimmed() == tr("root") && ui->password->text().trimmed() == tr("123456")) {
        accept();
    } else {

        //提示密码输入错误
        QMessageBox::warning(this, tr("警告！"),tr("用户名或密码错误！"), QMessageBox::Yes);

        ui->userName->setText("");
        ui->password->setText("");

        ui->userName->setFocus();
    }
}

void LoginForm::close()
{
    qDebug() << "this is close";
}
