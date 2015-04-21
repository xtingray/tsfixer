#ifndef TSFIXER 
#define TSFIXER 

#include <QDebug>
#include <QDomDocument>
#include <QFile>

class TSFixer : public QObject
{
    Q_OBJECT

    public:
        TSFixer(const QString &input, const QString &output);
        ~TSFixer();
        void start();

    private:
        QDomDocument updateRecord(QDomDocument outputDoc, const QString &key, const QString &value);
        QString source;
        QString target;
};

#endif
