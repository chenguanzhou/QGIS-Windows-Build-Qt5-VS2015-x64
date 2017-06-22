/********************************************************************************
** Form generated from reading UI file 'qgsauthconfigedit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHCONFIGEDIT_H
#define UI_QGSAUTHCONFIGEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include "qgsauthconfigidedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAuthConfigEdit
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QHBoxLayout *horizontalLayout;
    QComboBox *cmbAuthMethods;
    QToolButton *btnClear;
    QLineEdit *leResource;
    QLabel *lblNote;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *leName;
    QLabel *label;
    QgsAuthConfigIdEdit *authCfgEdit;
    QLabel *lblResource;
    QStackedWidget *stkwAuthMethods;
    QLabel *lblName;

    void setupUi(QDialog *QgsAuthConfigEdit)
    {
        if (QgsAuthConfigEdit->objectName().isEmpty())
            QgsAuthConfigEdit->setObjectName(QStringLiteral("QgsAuthConfigEdit"));
        QgsAuthConfigEdit->resize(400, 317);
        QgsAuthConfigEdit->setMinimumSize(QSize(400, 0));
        gridLayout = new QGridLayout(QgsAuthConfigEdit);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(QgsAuthConfigEdit);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Reset|QDialogButtonBox::Save);

        gridLayout->addWidget(buttonBox, 8, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cmbAuthMethods = new QComboBox(QgsAuthConfigEdit);
        cmbAuthMethods->setObjectName(QStringLiteral("cmbAuthMethods"));

        horizontalLayout->addWidget(cmbAuthMethods);

        btnClear = new QToolButton(QgsAuthConfigEdit);
        btnClear->setObjectName(QStringLiteral("btnClear"));

        horizontalLayout->addWidget(btnClear);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 2);

        leResource = new QLineEdit(QgsAuthConfigEdit);
        leResource->setObjectName(QStringLiteral("leResource"));

        gridLayout->addWidget(leResource, 2, 1, 1, 1);

        lblNote = new QLabel(QgsAuthConfigEdit);
        lblNote->setObjectName(QStringLiteral("lblNote"));
        QFont font;
        font.setItalic(true);
        lblNote->setFont(font);
        lblNote->setStyleSheet(QStringLiteral("color: rgb(128, 128, 128);"));
        lblNote->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblNote, 7, 0, 1, 2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        leName = new QLineEdit(QgsAuthConfigEdit);
        leName->setObjectName(QStringLiteral("leName"));

        horizontalLayout_5->addWidget(leName);

        label = new QLabel(QgsAuthConfigEdit);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        authCfgEdit = new QgsAuthConfigIdEdit(QgsAuthConfigEdit);
        authCfgEdit->setObjectName(QStringLiteral("authCfgEdit"));

        horizontalLayout_5->addWidget(authCfgEdit);


        gridLayout->addLayout(horizontalLayout_5, 1, 1, 1, 1);

        lblResource = new QLabel(QgsAuthConfigEdit);
        lblResource->setObjectName(QStringLiteral("lblResource"));

        gridLayout->addWidget(lblResource, 2, 0, 1, 1);

        stkwAuthMethods = new QStackedWidget(QgsAuthConfigEdit);
        stkwAuthMethods->setObjectName(QStringLiteral("stkwAuthMethods"));

        gridLayout->addWidget(stkwAuthMethods, 6, 0, 1, 2);

        lblName = new QLabel(QgsAuthConfigEdit);
        lblName->setObjectName(QStringLiteral("lblName"));

        gridLayout->addWidget(lblName, 1, 0, 1, 1);

        QWidget::setTabOrder(leName, leResource);
        QWidget::setTabOrder(leResource, cmbAuthMethods);
        QWidget::setTabOrder(cmbAuthMethods, btnClear);

        retranslateUi(QgsAuthConfigEdit);

        stkwAuthMethods->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(QgsAuthConfigEdit);
    } // setupUi

    void retranslateUi(QDialog *QgsAuthConfigEdit)
    {
        QgsAuthConfigEdit->setWindowTitle(QApplication::translate("QgsAuthConfigEdit", "Authentication", Q_NULLPTR));
        btnClear->setText(QApplication::translate("QgsAuthConfigEdit", "Clear", Q_NULLPTR));
        leResource->setPlaceholderText(QApplication::translate("QgsAuthConfigEdit", "Optional URL resource", Q_NULLPTR));
        lblNote->setText(QApplication::translate("QgsAuthConfigEdit", "Note: Saving writes directly to authentication database", Q_NULLPTR));
        leName->setPlaceholderText(QApplication::translate("QgsAuthConfigEdit", "Required", Q_NULLPTR));
        label->setText(QApplication::translate("QgsAuthConfigEdit", "Id", Q_NULLPTR));
        lblResource->setText(QApplication::translate("QgsAuthConfigEdit", "Resource", Q_NULLPTR));
        lblName->setText(QApplication::translate("QgsAuthConfigEdit", "Name", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsAuthConfigEdit: public Ui_QgsAuthConfigEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHCONFIGEDIT_H
