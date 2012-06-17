#include <bb/cascades/Application>
#include <QtCore/QLocale>
#include <QtCore/QTranslator>

#include "app.hpp"

using ::bb::cascades::Application;

int main(int argc, char **argv)
{
    Application app(argc, argv);

    QTranslator translator;
    QString locale_string = QLocale().name(); 
    QString filename = QString( "NamespaceExample_%1" ).arg( locale_string );
    if (translator.load(filename, "app/native/qm")) {
        app.installTranslator( &translator );
    }

    App mainApp;    

    return Application::exec();
}

