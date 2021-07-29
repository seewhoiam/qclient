#include "mainwindow.h"
#include "loginform.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qputenv("QT_MAC_WANTS_LAYER", "1");
    MainWindow *main = new MainWindow();
    main->setWindowTitle("欢迎界面");

//    LoginForm login;
//    if (login.exec() == QDialog::Accepted)
//    {
       main->show();
       return a.exec();
//    }
//    else
//    {
//        return 0;
//    }
}
