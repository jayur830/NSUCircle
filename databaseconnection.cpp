#include "databaseconnection.h"
#include <QtWidgets/QMessageBox>
#include <QDebug>

DatabaseConnection::DatabaseConnection(
        const QString &server,
        const QString &driver,
        const QString &user,
        const QString &password,
        const QString &databaseName,
        bool trustedConnection)
{
    mDatabase = QSqlDatabase::addDatabase("QODBC");
    mDatabaseName = databaseName;
    mServer = server;
    mDriver = driver;
    mUser = user;
    mPassword = password;
    mTrustedConnection = trustedConnection;
}

bool DatabaseConnection::openDatabase(QString* error)
{
    mDatabase.setConnectOptions("SQL_ATTR_ODBC_VERSION=SQL_OV_ODBC3;SQL_ATTR_ACCESS_MODE=SQL_MODE_READ_WRITE;SQL_ATTR_TRACE=SQL_OPT_TRACE_ON;");
    mDatabase.setDatabaseName(QString(
                                  "DRIVER={%1};"
                                  "SERVER=%2;"
                                  "DATABASE=%3;"
                                  "UID=%4;"
                                  "PWD=%5;"
                                  "Trusted_Connection=%6;")
                              .arg(mDriver)
                              .arg(mServer)
                              .arg(mDatabaseName)
                              .arg(mUser)
                              .arg(mPassword)
                              .arg(mTrustedConnection ? "Yes" : "No"));
    //mDatabase.setPort(1433);
    if (!mDatabase.open())
    {
        qDebug() << QSqlDatabase::driverName();
        if (error != nullptr) *error = mDatabase.lastError().text();
        return false;
    }
    else
    {
        qDebug() << QSqlDatabase::driverName();
        return true;
    }
}
