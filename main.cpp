#include <QtCore>
#include <QDebug>

#include "tsfixer.h"

int main(int argc, char *argv[])
{
    if (argc == 3) {
        QCoreApplication app(argc, argv);
        QString source = argv[1];
        QString target = argv[2];
        TSFixer *fixer = new TSFixer(source, target);
        fixer->start();
        return 0;
    } else {
        qDebug() << "Error: too few arguments";
        qDebug() << "Usage: ";
        qDebug() << "./tsfixer source.ts target.ts";
    }
}
