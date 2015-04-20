#ifndef TSFIXER 
#define TSFIXER 

#include <QDebug>
#include <QDomDocument>
#include <QFile>

class TSFixer : public QObject
{
    Q_OBJECT

    public:
        TSFixer(const QString &source, const QString &target);
        ~TSFixer();
        void start();

    private:
        QString source;
        QString target;
};

#endif
