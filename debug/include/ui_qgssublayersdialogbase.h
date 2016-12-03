/********************************************************************************
** Form generated from reading UI file 'qgssublayersdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSUBLAYERSDIALOGBASE_H
#define UI_QGSSUBLAYERSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsSublayersDialogBase
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *layersTable;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsSublayersDialogBase)
    {
        if (QgsSublayersDialogBase->objectName().isEmpty())
            QgsSublayersDialogBase->setObjectName(QStringLiteral("QgsSublayersDialogBase"));
        QgsSublayersDialogBase->resize(584, 236);
        gridLayout = new QGridLayout(QgsSublayersDialogBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        layersTable = new QTreeWidget(QgsSublayersDialogBase);
        layersTable->setObjectName(QStringLiteral("layersTable"));
        layersTable->setSelectionMode(QAbstractItemView::ExtendedSelection);
        layersTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        layersTable->setSortingEnabled(false);
        layersTable->header()->setProperty("showSortIndicator", QVariant(true));

        gridLayout->addWidget(layersTable, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsSublayersDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(QgsSublayersDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsSublayersDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsSublayersDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsSublayersDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsSublayersDialogBase)
    {
        QgsSublayersDialogBase->setWindowTitle(QApplication::translate("QgsSublayersDialogBase", "Select layers to load", 0));
        QTreeWidgetItem *___qtreewidgetitem = layersTable->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsSublayersDialogBase", "1", 0));
    } // retranslateUi

};

namespace Ui {
    class QgsSublayersDialogBase: public Ui_QgsSublayersDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSUBLAYERSDIALOGBASE_H
