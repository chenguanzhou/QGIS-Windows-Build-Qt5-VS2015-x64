/********************************************************************************
** Form generated from reading UI file 'qgsgenericprojectionselectorbase.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGENERICPROJECTIONSELECTORBASE_H
#define UI_QGSGENERICPROJECTIONSELECTORBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>
#include "qgsprojectionselector.h"

QT_BEGIN_NAMESPACE

class Ui_QgsGenericProjectionSelectorBase
{
public:
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QgsProjectionSelector *projectionSelector;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsGenericProjectionSelectorBase)
    {
        if (QgsGenericProjectionSelectorBase->objectName().isEmpty())
            QgsGenericProjectionSelectorBase->setObjectName(QStringLiteral("QgsGenericProjectionSelectorBase"));
        QgsGenericProjectionSelectorBase->resize(605, 563);
        QIcon icon;
        icon.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        QgsGenericProjectionSelectorBase->setWindowIcon(icon);
        QgsGenericProjectionSelectorBase->setModal(true);
        gridLayout = new QGridLayout(QgsGenericProjectionSelectorBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(3, 3, 3, 3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textEdit = new QTextEdit(QgsGenericProjectionSelectorBase);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setMaximumSize(QSize(16777215, 160));
        textEdit->setFocusPolicy(Qt::NoFocus);
        textEdit->setAcceptDrops(false);
        textEdit->setLineWidth(2);
        textEdit->setReadOnly(true);

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        projectionSelector = new QgsProjectionSelector(QgsGenericProjectionSelectorBase);
        projectionSelector->setObjectName(QStringLiteral("projectionSelector"));

        gridLayout->addWidget(projectionSelector, 1, 0, 1, 1);

        mButtonBox = new QDialogButtonBox(QgsGenericProjectionSelectorBase);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);
        mButtonBox->setCenterButtons(false);

        gridLayout->addWidget(mButtonBox, 2, 0, 1, 1);


        retranslateUi(QgsGenericProjectionSelectorBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsGenericProjectionSelectorBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsGenericProjectionSelectorBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsGenericProjectionSelectorBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGenericProjectionSelectorBase)
    {
        QgsGenericProjectionSelectorBase->setWindowTitle(QApplication::translate("QgsGenericProjectionSelectorBase", "Coordinate Reference System Selector", 0));
    } // retranslateUi

};

namespace Ui {
    class QgsGenericProjectionSelectorBase: public Ui_QgsGenericProjectionSelectorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGENERICPROJECTIONSELECTORBASE_H
