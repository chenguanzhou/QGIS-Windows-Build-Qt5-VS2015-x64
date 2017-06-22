/********************************************************************************
** Form generated from reading UI file 'qgsauthsslimporterrors.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHSSLIMPORTERRORS_H
#define UI_QGSAUTHSSLIMPORTERRORS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SslErrors
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label;
    QListWidget *sslErrorList;
    QHBoxLayout *hboxLayout;
    QToolButton *certificateChainButton;
    QSpacerItem *spacerItem;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *SslErrors)
    {
        if (SslErrors->objectName().isEmpty())
            SslErrors->setObjectName(QStringLiteral("SslErrors"));
        SslErrors->resize(387, 216);
        vboxLayout = new QVBoxLayout(SslErrors);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        label = new QLabel(SslErrors);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        vboxLayout->addWidget(label);

        sslErrorList = new QListWidget(SslErrors);
        sslErrorList->setObjectName(QStringLiteral("sslErrorList"));
        sslErrorList->setAlternatingRowColors(true);
        sslErrorList->setWordWrap(true);

        vboxLayout->addWidget(sslErrorList);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        certificateChainButton = new QToolButton(SslErrors);
        certificateChainButton->setObjectName(QStringLiteral("certificateChainButton"));

        hboxLayout->addWidget(certificateChainButton);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        pushButton = new QPushButton(SslErrors);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        hboxLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(SslErrors);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        hboxLayout->addWidget(pushButton_2);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(SslErrors);
        QObject::connect(pushButton, SIGNAL(clicked()), SslErrors, SLOT(accept()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), SslErrors, SLOT(reject()));

        QMetaObject::connectSlotsByName(SslErrors);
    } // setupUi

    void retranslateUi(QDialog *SslErrors)
    {
        SslErrors->setWindowTitle(QApplication::translate("SslErrors", "Unable To Validate The Connection", Q_NULLPTR));
        label->setText(QApplication::translate("SslErrors", "<html><head/><body><p><span style=\" font-family:'Sans Serif'; font-size:11pt; font-weight:600; color:#ff0000;\">Warning</span><span style=\" font-family:'Sans Serif'; font-size:11pt; color:#ff0000;\">:</span><span style=\" font-family:'Sans Serif'; font-size:11pt; color:#000000;\"> One or more SSL errors have occurred validating the host you are connecting to. Review the following list of errors and click Ignore to continue, or Cancel to abort the connection.</span></p></body></html>", Q_NULLPTR));
        certificateChainButton->setText(QApplication::translate("SslErrors", "View Certificate Chain", Q_NULLPTR));
        pushButton->setText(QApplication::translate("SslErrors", "Ignore", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("SslErrors", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SslErrors: public Ui_SslErrors {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHSSLIMPORTERRORS_H
