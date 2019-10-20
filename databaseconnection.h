#pragma once

#include <QSqlDatabase>
#include <QSqlError>

class DatabaseConnection : public QSqlDatabase
{
public:
    DatabaseConnection(const QString &server,
                                              const QString &driver,
                                              const QString &user,
                                              const QString &password,
                                              const QString &databaseName,
                                              bool trustedConnection = true);
    bool openDatabase(QString* error = nullptr);
private:
    QSqlDatabase mDatabase;
    QString mServer;
    QString mDriver;
    QString mUser;
    QString mPassword;
    QString mDatabaseName;
    bool mTrustedConnection;

};
