#pragma once

#include <QTextCodec>
#include <QString>

QString toUniString(QString str)
{
    QTextCodec * codec = QTextCodec::codecForName("eucKR");
    QString localeStr = codec->toUnicode(str);

    return localeStr;
}
