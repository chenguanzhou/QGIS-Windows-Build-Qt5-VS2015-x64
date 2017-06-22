/********************************************************************************
** Form generated from reading UI file 'qgsexpressionselectiondialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEXPRESSIONSELECTIONDIALOGBASE_H
#define UI_QGSEXPRESSIONSELECTIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include "qgsexpressionbuilderwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsExpressionSelectionDialogBase
{
public:
    QAction *mActionSelect;
    QAction *mActionAddToSelection;
    QAction *mActionRemoveFromSelection;
    QAction *mActionSelectIntersect;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *mPbnClose;
    QToolButton *mButtonSelect;
    QgsExpressionBuilderWidget *mExpressionBuilder;

    void setupUi(QDialog *QgsExpressionSelectionDialogBase)
    {
        if (QgsExpressionSelectionDialogBase->objectName().isEmpty())
            QgsExpressionSelectionDialogBase->setObjectName(QStringLiteral("QgsExpressionSelectionDialogBase"));
        QgsExpressionSelectionDialogBase->resize(536, 401);
        mActionSelect = new QAction(QgsExpressionSelectionDialogBase);
        mActionSelect->setObjectName(QStringLiteral("mActionSelect"));
        mActionAddToSelection = new QAction(QgsExpressionSelectionDialogBase);
        mActionAddToSelection->setObjectName(QStringLiteral("mActionAddToSelection"));
        mActionRemoveFromSelection = new QAction(QgsExpressionSelectionDialogBase);
        mActionRemoveFromSelection->setObjectName(QStringLiteral("mActionRemoveFromSelection"));
        mActionSelectIntersect = new QAction(QgsExpressionSelectionDialogBase);
        mActionSelectIntersect->setObjectName(QStringLiteral("mActionSelectIntersect"));
        gridLayout = new QGridLayout(QgsExpressionSelectionDialogBase);
        gridLayout->setContentsMargins(3, 3, 3, 3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        mPbnClose = new QPushButton(QgsExpressionSelectionDialogBase);
        mPbnClose->setObjectName(QStringLiteral("mPbnClose"));

        gridLayout->addWidget(mPbnClose, 1, 2, 1, 1);

        mButtonSelect = new QToolButton(QgsExpressionSelectionDialogBase);
        mButtonSelect->setObjectName(QStringLiteral("mButtonSelect"));
        mButtonSelect->setMinimumSize(QSize(0, 31));
        mButtonSelect->setPopupMode(QToolButton::MenuButtonPopup);
        mButtonSelect->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(mButtonSelect, 1, 1, 1, 1);

        mExpressionBuilder = new QgsExpressionBuilderWidget(QgsExpressionSelectionDialogBase);
        mExpressionBuilder->setObjectName(QStringLiteral("mExpressionBuilder"));

        gridLayout->addWidget(mExpressionBuilder, 0, 0, 1, 4);


        retranslateUi(QgsExpressionSelectionDialogBase);

        QMetaObject::connectSlotsByName(QgsExpressionSelectionDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsExpressionSelectionDialogBase)
    {
        QgsExpressionSelectionDialogBase->setWindowTitle(QApplication::translate("QgsExpressionSelectionDialogBase", "Select By Expression", Q_NULLPTR));
        mActionSelect->setText(QApplication::translate("QgsExpressionSelectionDialogBase", "Select", Q_NULLPTR));
        mActionAddToSelection->setText(QApplication::translate("QgsExpressionSelectionDialogBase", "Add to selection", Q_NULLPTR));
        mActionRemoveFromSelection->setText(QApplication::translate("QgsExpressionSelectionDialogBase", "Remove from selection", Q_NULLPTR));
        mActionSelectIntersect->setText(QApplication::translate("QgsExpressionSelectionDialogBase", "Select within selection", Q_NULLPTR));
        mPbnClose->setText(QApplication::translate("QgsExpressionSelectionDialogBase", "Close", Q_NULLPTR));
        mButtonSelect->setText(QApplication::translate("QgsExpressionSelectionDialogBase", "...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsExpressionSelectionDialogBase: public Ui_QgsExpressionSelectionDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEXPRESSIONSELECTIONDIALOGBASE_H
