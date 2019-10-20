#pragma once

#include <QApplication>
#include <QTranslator>

template<typename Ui, typename Form>
class Translation
{
protected:
    QString language;
    QTranslator translator;
public:
    void translate(QString lang, Ui* ui, Form* form)
    {
        translator.load(lang);
        QApplication::installTranslator(&translator);
        ui->retranslateUi(form);
    }
    void translate(Ui* ui, Form* form)
    {
        if (ui->translateComboBox->currentText() == QString::fromLocal8Bit("ÇÑ±¹¾î")) translate(language = "lang_ko.qm", ui, form);
        else if (ui->translateComboBox->currentText() == "English") translate(language = "lang_en.qm", ui, form);
    }
};
