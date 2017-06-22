/********************************************************************************
** Form generated from reading UI file 'qgsauthmethodplugins.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHMETHODPLUGINS_H
#define UI_QGSAUTHMETHODPLUGINS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsAuthMethodPlugins
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *tblAuthPlugins;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsAuthMethodPlugins)
    {
        if (QgsAuthMethodPlugins->objectName().isEmpty())
            QgsAuthMethodPlugins->setObjectName(QStringLiteral("QgsAuthMethodPlugins"));
        QgsAuthMethodPlugins->resize(400, 300);
        verticalLayout = new QVBoxLayout(QgsAuthMethodPlugins);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        label = new QLabel(QgsAuthMethodPlugins);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        tblAuthPlugins = new QTableWidget(QgsAuthMethodPlugins);
        tblAuthPlugins->setObjectName(QStringLiteral("tblAuthPlugins"));

        verticalLayout->addWidget(tblAuthPlugins);

        buttonBox = new QDialogButtonBox(QgsAuthMethodPlugins);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QgsAuthMethodPlugins);

        QMetaObject::connectSlotsByName(QgsAuthMethodPlugins);
    } // setupUi

    void retranslateUi(QDialog *QgsAuthMethodPlugins)
    {
        QgsAuthMethodPlugins->setWindowTitle(QApplication::translate("QgsAuthMethodPlugins", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("QgsAuthMethodPlugins", "Installed authentication method plugins", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsAuthMethodPlugins: public Ui_QgsAuthMethodPlugins {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHMETHODPLUGINS_H
