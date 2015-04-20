#include "tsfixer.h"

TSFixer::TSFixer(const QString &source, const QString &target)
{
    this->source = source;
    this->target = target;
}

TSFixer::~TSFixer()
{
}

void TSFixer::start()
{
    qDebug() << "TSFixer::TSFixer() - Loading source file: " << source;
    qDebug() << "TSFixer::TSFixer() - Loading source target: " << target;

    QDomDocument inputDoc;
    QFile input(source);
    if (!input.open(QIODevice::ReadOnly)) {
        qDebug() << "TSFixer::TSFixer() - Fatal Error: Can't open source file -> " << source;
        return;
    }

    if (!inputDoc.setContent(&input)) {
        qDebug() << "TSFixer::TSFixer() - Fatal Error: Can't load source XML file -> " << source;
        input.close();
        return;
    }
    input.close();

    QDomDocument outputDoc;
    QFile output(target);
    if (!output.open(QIODevice::ReadOnly)) {
        qDebug() << "TSFixer::TSFixer() - Fatal Error: Can't open target file -> " << target;
        return;
    }

    if (!outputDoc.setContent(&output)) {
        qDebug() << "TSFixer::TSFixer() - Fatal Error: Can't load target XML file -> " << target;
        output.close();
        return;
    }
    output.close();

}
