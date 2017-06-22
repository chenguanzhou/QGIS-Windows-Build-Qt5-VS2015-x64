/********************************************************************************
** Form generated from reading UI file 'qgsexpressionbuilderdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEXPRESSIONBUILDERDIALOGBASE_H
#define UI_QGSEXPRESSIONBUILDERDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include "qgsexpressionbuilderwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsExpressionBuilderDialogBase
{
public:
    QGridLayout *gridLayout;
    QgsExpressionBuilderWidget *builder;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsExpressionBuilderDialogBase)
    {
        if (QgsExpressionBuilderDialogBase->objectName().isEmpty())
            QgsExpressionBuilderDialogBase->setObjectName(QStringLiteral("QgsExpressionBuilderDialogBase"));
        QgsExpressionBuilderDialogBase->resize(507, 539);
        gridLayout = new QGridLayout(QgsExpressionBuilderDialogBase);
        gridLayout->setContentsMargins(3, 3, 3, 3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        builder = new QgsExpressionBuilderWidget(QgsExpressionBuilderDialogBase);
        builder->setObjectName(QStringLiteral("builder"));
        builder->setAutoFillBackground(false);
        builder->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(builder, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsExpressionBuilderDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(QgsExpressionBuilderDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsExpressionBuilderDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsExpressionBuilderDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsExpressionBuilderDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsExpressionBuilderDialogBase)
    {
        QgsExpressionBuilderDialogBase->setWindowTitle(QApplication::translate("QgsExpressionBuilderDialogBase", "Expression string builder", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsExpressionBuilderDialogBase: public Ui_QgsExpressionBuilderDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEXPRESSIONBUILDERDIALOGBASE_H
