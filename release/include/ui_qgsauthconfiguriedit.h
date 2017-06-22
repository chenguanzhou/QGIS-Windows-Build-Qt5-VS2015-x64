/********************************************************************************
** Form generated from reading UI file 'qgsauthconfiguriedit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHCONFIGURIEDIT_H
#define UI_QGSAUTHCONFIGURIEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>
#include "qgsauthconfigselect.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAuthConfigUriEdit
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *teDataUri;
    QgsAuthConfigSelect *wdgtAuthSelect;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsAuthConfigUriEdit)
    {
        if (QgsAuthConfigUriEdit->objectName().isEmpty())
            QgsAuthConfigUriEdit->setObjectName(QStringLiteral("QgsAuthConfigUriEdit"));
        QgsAuthConfigUriEdit->resize(449, 449);
        verticalLayout = new QVBoxLayout(QgsAuthConfigUriEdit);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(QgsAuthConfigUriEdit);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, -1, 6, 6);
        teDataUri = new QPlainTextEdit(groupBox);
        teDataUri->setObjectName(QStringLiteral("teDataUri"));
        teDataUri->setMaximumSize(QSize(16777215, 75));
        teDataUri->setReadOnly(true);

        verticalLayout_2->addWidget(teDataUri);

        wdgtAuthSelect = new QgsAuthConfigSelect(groupBox);
        wdgtAuthSelect->setObjectName(QStringLiteral("wdgtAuthSelect"));

        verticalLayout_2->addWidget(wdgtAuthSelect);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setItalic(true);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(128, 128, 128);"));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        verticalLayout_2->addWidget(label);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(QgsAuthConfigUriEdit);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Reset|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QgsAuthConfigUriEdit);

        QMetaObject::connectSlotsByName(QgsAuthConfigUriEdit);
    } // setupUi

    void retranslateUi(QDialog *QgsAuthConfigUriEdit)
    {
        QgsAuthConfigUriEdit->setWindowTitle(QApplication::translate("QgsAuthConfigUriEdit", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsAuthConfigUriEdit", "Edit authentication configuration ID", Q_NULLPTR));
        label->setText(QApplication::translate("QgsAuthConfigUriEdit", "Note: Button actions above affect authentication database", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsAuthConfigUriEdit: public Ui_QgsAuthConfigUriEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHCONFIGURIEDIT_H
