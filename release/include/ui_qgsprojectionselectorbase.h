/********************************************************************************
** Form generated from reading UI file 'qgsprojectionselectorbase.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROJECTIONSELECTORBASE_H
#define UI_QGSPROJECTIONSELECTORBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProjectionSelectorBase
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *teSelected;
    QSplitter *splitter;
    QTreeWidget *lstRecent;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *cbxHideDeprecated;
    QTreeWidget *lstCoordinateSystems;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QgsFilterLineEdit *leSearch;
    QLabel *label_3;
    QTextEdit *teProjection;

    void setupUi(QWidget *QgsProjectionSelectorBase)
    {
        if (QgsProjectionSelectorBase->objectName().isEmpty())
            QgsProjectionSelectorBase->setObjectName(QStringLiteral("QgsProjectionSelectorBase"));
        QgsProjectionSelectorBase->resize(538, 635);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsProjectionSelectorBase->sizePolicy().hasHeightForWidth());
        QgsProjectionSelectorBase->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        QgsProjectionSelectorBase->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(QgsProjectionSelectorBase);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(QgsProjectionSelectorBase);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        teSelected = new QLineEdit(QgsProjectionSelectorBase);
        teSelected->setObjectName(QStringLiteral("teSelected"));
        teSelected->setReadOnly(true);

        horizontalLayout_2->addWidget(teSelected);


        gridLayout_2->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        splitter = new QSplitter(QgsProjectionSelectorBase);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setChildrenCollapsible(true);
        lstRecent = new QTreeWidget(splitter);
        lstRecent->setObjectName(QStringLiteral("lstRecent"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lstRecent->sizePolicy().hasHeightForWidth());
        lstRecent->setSizePolicy(sizePolicy1);
        lstRecent->setMinimumSize(QSize(0, 105));
        lstRecent->setMaximumSize(QSize(16777215, 200));
        lstRecent->setAlternatingRowColors(true);
        lstRecent->setRootIsDecorated(false);
        lstRecent->setUniformRowHeights(true);
        lstRecent->setColumnCount(3);
        splitter->addWidget(lstRecent);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        cbxHideDeprecated = new QCheckBox(layoutWidget);
        cbxHideDeprecated->setObjectName(QStringLiteral("cbxHideDeprecated"));
        QFont font1;
        font1.setPointSize(9);
        cbxHideDeprecated->setFont(font1);

        horizontalLayout_3->addWidget(cbxHideDeprecated);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        lstCoordinateSystems = new QTreeWidget(layoutWidget);
        lstCoordinateSystems->setObjectName(QStringLiteral("lstCoordinateSystems"));
        lstCoordinateSystems->setAlternatingRowColors(true);
        lstCoordinateSystems->setUniformRowHeights(true);
        lstCoordinateSystems->setColumnCount(3);

        gridLayout->addWidget(lstCoordinateSystems, 1, 0, 1, 1);

        splitter->addWidget(layoutWidget);

        gridLayout_2->addWidget(splitter, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_5 = new QLabel(QgsProjectionSelectorBase);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        leSearch = new QgsFilterLineEdit(QgsProjectionSelectorBase);
        leSearch->setObjectName(QStringLiteral("leSearch"));

        horizontalLayout->addWidget(leSearch);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        label_3 = new QLabel(QgsProjectionSelectorBase);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        teProjection = new QTextEdit(QgsProjectionSelectorBase);
        teProjection->setObjectName(QStringLiteral("teProjection"));
        teProjection->setMinimumSize(QSize(0, 40));
        teProjection->setMaximumSize(QSize(16777215, 90));
        teProjection->setBaseSize(QSize(0, 40));
        teProjection->setAutoFormatting(QTextEdit::AutoBulletList);
        teProjection->setReadOnly(true);

        gridLayout_2->addWidget(teProjection, 6, 0, 1, 1);

        QWidget::setTabOrder(leSearch, lstRecent);
        QWidget::setTabOrder(lstRecent, cbxHideDeprecated);
        QWidget::setTabOrder(cbxHideDeprecated, lstCoordinateSystems);
        QWidget::setTabOrder(lstCoordinateSystems, teSelected);
        QWidget::setTabOrder(teSelected, teProjection);

        retranslateUi(QgsProjectionSelectorBase);

        QMetaObject::connectSlotsByName(QgsProjectionSelectorBase);
    } // setupUi

    void retranslateUi(QWidget *QgsProjectionSelectorBase)
    {
        QgsProjectionSelectorBase->setWindowTitle(QApplication::translate("QgsProjectionSelectorBase", "Coordinate Reference System Selector", 0));
        label->setText(QApplication::translate("QgsProjectionSelectorBase", "Selected CRS:", 0));
        QTreeWidgetItem *___qtreewidgetitem = lstRecent->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsProjectionSelectorBase", "ID", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsProjectionSelectorBase", "Authority ID", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsProjectionSelectorBase", "Coordinate Reference System", 0));
        label_4->setText(QApplication::translate("QgsProjectionSelectorBase", "Coordinate reference systems of the world", 0));
        cbxHideDeprecated->setText(QApplication::translate("QgsProjectionSelectorBase", "Hide deprecated CRSs", 0));
        QTreeWidgetItem *___qtreewidgetitem1 = lstCoordinateSystems->headerItem();
        ___qtreewidgetitem1->setText(2, QApplication::translate("QgsProjectionSelectorBase", "ID", 0));
        ___qtreewidgetitem1->setText(1, QApplication::translate("QgsProjectionSelectorBase", "Authority ID", 0));
        ___qtreewidgetitem1->setText(0, QApplication::translate("QgsProjectionSelectorBase", "Coordinate Reference System", 0));
        label_5->setText(QApplication::translate("QgsProjectionSelectorBase", "Filter", 0));
        label_3->setText(QApplication::translate("QgsProjectionSelectorBase", "Recently used coordinate reference systems", 0));
    } // retranslateUi

};

namespace Ui {
    class QgsProjectionSelectorBase: public Ui_QgsProjectionSelectorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROJECTIONSELECTORBASE_H
