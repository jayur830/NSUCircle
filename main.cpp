#include "nsucircle.h"
#include <QApplication>
#include <QSplashScreen>
#include <QTimer>
#include <Windows.h>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setStyle("fusion");
    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap("C:\\Qt_Programming\\NSUCircle\\images\\splash.png"));
    splash->setEnabled(false);

    splash->show();

//    thread.start();

    NSUCircle* nsu = new NSUCircle(nullptr, "lang_ko.qm");
    //nsu->show();
    QTimer::singleShot(2100, splash, SLOT(close()));
    QTimer::singleShot(2100, nsu, SLOT(show()));
    return app.exec();
}
