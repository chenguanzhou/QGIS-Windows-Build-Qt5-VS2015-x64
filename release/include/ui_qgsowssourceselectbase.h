/********************************************************************************
** Form generated from reading UI file 'qgsowssourceselectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSOWSSOURCESELECTBASE_H
#define UI_QGSOWSSOURCESELECTBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsOWSSourceSelectBase
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *mDialogButtonBox;
    QLabel *mStatusLabel;
    QTabWidget *mTabWidget;
    QWidget *mLayersTab;
    QVBoxLayout *verticalLayout;
    QComboBox *mConnectionsComboBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *mConnectButton;
    QPushButton *mNewButton;
    QPushButton *mEditButton;
    QPushButton *mDeleteButton;
    QSpacerItem *horizontalSpacer_1;
    QPushButton *mLoadButton;
    QPushButton *mSaveButton;
    QPushButton *mAddDefaultButton;
    QTreeWidget *mLayersTreeWidget;
    QWidget *mTimeWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *mTimeLabel;
    QComboBox *mTimeComboBox;
    QWidget *mCRSWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mCRSLabel;
    QLabel *mSelectedCRSLabel;
    QPushButton *mChangeCRSButton;
    QWidget *mFormatWidget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *mFormatLabel;
    QComboBox *mFormatComboBox;
    QGroupBox *mWMSGroupBox;
    QGridLayout *gridLayout;
    QLabel *mLayerNameLabel;
    QLineEdit *mLayerNameLineEdit;
    QLineEdit *mTileWidthLineEdit;
    QLabel *mTileSizeLabel;
    QLineEdit *mTileHeightLineEdit;
    QLabel *mFeatureCountLabel;
    QLineEdit *mFeatureCountLineEdit;
    QWidget *mCacheWidget;
    QHBoxLayout *horizontalLayout_7;
    QLabel *mCacheLabel;
    QComboBox *mCacheComboBox;
    QWidget *mLayerOrderTab;
    QGridLayout *gridLayout1;
    QPushButton *mLayerUpButton;
    QPushButton *mLayerDownButton;
    QSpacerItem *horizontalSpacer_2;
    QTreeWidget *mLayerOrderTreeWidget;
    QWidget *mTilesetsTab;
    QGridLayout *gridLayout_3;
    QTableWidget *mTilesetsTableWidget;
    QWidget *mSearchTab;
    QGridLayout *gridLayout2;
    QLineEdit *mSearchTermLineEdit;
    QPushButton *mSearchButton;
    QTableWidget *mSearchTableWidget;
    QPushButton *mSearchAddButton;

    void setupUi(QDialog *QgsOWSSourceSelectBase)
    {
        if (QgsOWSSourceSelectBase->objectName().isEmpty())
            QgsOWSSourceSelectBase->setObjectName(QStringLiteral("QgsOWSSourceSelectBase"));
        QgsOWSSourceSelectBase->resize(743, 615);
        QIcon icon;
        icon.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        QgsOWSSourceSelectBase->setWindowIcon(icon);
        QgsOWSSourceSelectBase->setSizeGripEnabled(true);
        QgsOWSSourceSelectBase->setModal(true);
        gridLayout_2 = new QGridLayout(QgsOWSSourceSelectBase);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mDialogButtonBox = new QDialogButtonBox(QgsOWSSourceSelectBase);
        mDialogButtonBox->setObjectName(QStringLiteral("mDialogButtonBox"));
        mDialogButtonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Close|QDialogButtonBox::Help);

        gridLayout_2->addWidget(mDialogButtonBox, 3, 0, 1, 1);

        mStatusLabel = new QLabel(QgsOWSSourceSelectBase);
        mStatusLabel->setObjectName(QStringLiteral("mStatusLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mStatusLabel->sizePolicy().hasHeightForWidth());
        mStatusLabel->setSizePolicy(sizePolicy);
        mStatusLabel->setWordWrap(false);

        gridLayout_2->addWidget(mStatusLabel, 4, 0, 1, 1);

        mTabWidget = new QTabWidget(QgsOWSSourceSelectBase);
        mTabWidget->setObjectName(QStringLiteral("mTabWidget"));
        mTabWidget->setEnabled(true);
        mLayersTab = new QWidget();
        mLayersTab->setObjectName(QStringLiteral("mLayersTab"));
        verticalLayout = new QVBoxLayout(mLayersTab);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mConnectionsComboBox = new QComboBox(mLayersTab);
        mConnectionsComboBox->setObjectName(QStringLiteral("mConnectionsComboBox"));

        verticalLayout->addWidget(mConnectionsComboBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        mConnectButton = new QPushButton(mLayersTab);
        mConnectButton->setObjectName(QStringLiteral("mConnectButton"));
        mConnectButton->setEnabled(false);

        horizontalLayout_3->addWidget(mConnectButton);

        mNewButton = new QPushButton(mLayersTab);
        mNewButton->setObjectName(QStringLiteral("mNewButton"));

        horizontalLayout_3->addWidget(mNewButton);

        mEditButton = new QPushButton(mLayersTab);
        mEditButton->setObjectName(QStringLiteral("mEditButton"));
        mEditButton->setEnabled(false);

        horizontalLayout_3->addWidget(mEditButton);

        mDeleteButton = new QPushButton(mLayersTab);
        mDeleteButton->setObjectName(QStringLiteral("mDeleteButton"));
        mDeleteButton->setEnabled(false);

        horizontalLayout_3->addWidget(mDeleteButton);

        horizontalSpacer_1 = new QSpacerItem(82, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_1);

        mLoadButton = new QPushButton(mLayersTab);
        mLoadButton->setObjectName(QStringLiteral("mLoadButton"));

        horizontalLayout_3->addWidget(mLoadButton);

        mSaveButton = new QPushButton(mLayersTab);
        mSaveButton->setObjectName(QStringLiteral("mSaveButton"));

        horizontalLayout_3->addWidget(mSaveButton);

        mAddDefaultButton = new QPushButton(mLayersTab);
        mAddDefaultButton->setObjectName(QStringLiteral("mAddDefaultButton"));

        horizontalLayout_3->addWidget(mAddDefaultButton);


        verticalLayout->addLayout(horizontalLayout_3);

        mLayersTreeWidget = new QTreeWidget(mLayersTab);
        mLayersTreeWidget->setObjectName(QStringLiteral("mLayersTreeWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLayersTreeWidget->sizePolicy().hasHeightForWidth());
        mLayersTreeWidget->setSizePolicy(sizePolicy1);
        mLayersTreeWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        mLayersTreeWidget->setAllColumnsShowFocus(true);

        verticalLayout->addWidget(mLayersTreeWidget);

        mTimeWidget = new QWidget(mLayersTab);
        mTimeWidget->setObjectName(QStringLiteral("mTimeWidget"));
        horizontalLayout = new QHBoxLayout(mTimeWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mTimeLabel = new QLabel(mTimeWidget);
        mTimeLabel->setObjectName(QStringLiteral("mTimeLabel"));

        horizontalLayout->addWidget(mTimeLabel);

        mTimeComboBox = new QComboBox(mTimeWidget);
        mTimeComboBox->setObjectName(QStringLiteral("mTimeComboBox"));
        mTimeComboBox->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mTimeComboBox->sizePolicy().hasHeightForWidth());
        mTimeComboBox->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(mTimeComboBox);


        verticalLayout->addWidget(mTimeWidget);

        mCRSWidget = new QWidget(mLayersTab);
        mCRSWidget->setObjectName(QStringLiteral("mCRSWidget"));
        horizontalLayout_2 = new QHBoxLayout(mCRSWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mCRSLabel = new QLabel(mCRSWidget);
        mCRSLabel->setObjectName(QStringLiteral("mCRSLabel"));

        horizontalLayout_2->addWidget(mCRSLabel);

        mSelectedCRSLabel = new QLabel(mCRSWidget);
        mSelectedCRSLabel->setObjectName(QStringLiteral("mSelectedCRSLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mSelectedCRSLabel->sizePolicy().hasHeightForWidth());
        mSelectedCRSLabel->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(mSelectedCRSLabel);

        mChangeCRSButton = new QPushButton(mCRSWidget);
        mChangeCRSButton->setObjectName(QStringLiteral("mChangeCRSButton"));
        mChangeCRSButton->setEnabled(false);

        horizontalLayout_2->addWidget(mChangeCRSButton);


        verticalLayout->addWidget(mCRSWidget);

        mFormatWidget = new QWidget(mLayersTab);
        mFormatWidget->setObjectName(QStringLiteral("mFormatWidget"));
        horizontalLayout_6 = new QHBoxLayout(mFormatWidget);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        mFormatLabel = new QLabel(mFormatWidget);
        mFormatLabel->setObjectName(QStringLiteral("mFormatLabel"));

        horizontalLayout_6->addWidget(mFormatLabel);

        mFormatComboBox = new QComboBox(mFormatWidget);
        mFormatComboBox->setObjectName(QStringLiteral("mFormatComboBox"));
        sizePolicy2.setHeightForWidth(mFormatComboBox->sizePolicy().hasHeightForWidth());
        mFormatComboBox->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(mFormatComboBox);


        verticalLayout->addWidget(mFormatWidget);

        mWMSGroupBox = new QGroupBox(mLayersTab);
        mWMSGroupBox->setObjectName(QStringLiteral("mWMSGroupBox"));
        gridLayout = new QGridLayout(mWMSGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mLayerNameLabel = new QLabel(mWMSGroupBox);
        mLayerNameLabel->setObjectName(QStringLiteral("mLayerNameLabel"));

        gridLayout->addWidget(mLayerNameLabel, 0, 0, 1, 1);

        mLayerNameLineEdit = new QLineEdit(mWMSGroupBox);
        mLayerNameLineEdit->setObjectName(QStringLiteral("mLayerNameLineEdit"));

        gridLayout->addWidget(mLayerNameLineEdit, 0, 1, 1, 2);

        mTileWidthLineEdit = new QLineEdit(mWMSGroupBox);
        mTileWidthLineEdit->setObjectName(QStringLiteral("mTileWidthLineEdit"));

        gridLayout->addWidget(mTileWidthLineEdit, 1, 1, 1, 1);

        mTileSizeLabel = new QLabel(mWMSGroupBox);
        mTileSizeLabel->setObjectName(QStringLiteral("mTileSizeLabel"));

        gridLayout->addWidget(mTileSizeLabel, 1, 0, 1, 1);

        mTileHeightLineEdit = new QLineEdit(mWMSGroupBox);
        mTileHeightLineEdit->setObjectName(QStringLiteral("mTileHeightLineEdit"));

        gridLayout->addWidget(mTileHeightLineEdit, 1, 2, 1, 1);

        mFeatureCountLabel = new QLabel(mWMSGroupBox);
        mFeatureCountLabel->setObjectName(QStringLiteral("mFeatureCountLabel"));

        gridLayout->addWidget(mFeatureCountLabel, 2, 0, 1, 2);

        mFeatureCountLineEdit = new QLineEdit(mWMSGroupBox);
        mFeatureCountLineEdit->setObjectName(QStringLiteral("mFeatureCountLineEdit"));

        gridLayout->addWidget(mFeatureCountLineEdit, 2, 2, 1, 1);


        verticalLayout->addWidget(mWMSGroupBox);

        mCacheWidget = new QWidget(mLayersTab);
        mCacheWidget->setObjectName(QStringLiteral("mCacheWidget"));
        horizontalLayout_7 = new QHBoxLayout(mCacheWidget);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        mCacheLabel = new QLabel(mCacheWidget);
        mCacheLabel->setObjectName(QStringLiteral("mCacheLabel"));

        horizontalLayout_7->addWidget(mCacheLabel);

        mCacheComboBox = new QComboBox(mCacheWidget);
        mCacheComboBox->setObjectName(QStringLiteral("mCacheComboBox"));
        sizePolicy2.setHeightForWidth(mCacheComboBox->sizePolicy().hasHeightForWidth());
        mCacheComboBox->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(mCacheComboBox);


        verticalLayout->addWidget(mCacheWidget);

        mTabWidget->addTab(mLayersTab, QString());
        mLayerOrderTab = new QWidget();
        mLayerOrderTab->setObjectName(QStringLiteral("mLayerOrderTab"));
        gridLayout1 = new QGridLayout(mLayerOrderTab);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        mLayerUpButton = new QPushButton(mLayerOrderTab);
        mLayerUpButton->setObjectName(QStringLiteral("mLayerUpButton"));

        gridLayout1->addWidget(mLayerUpButton, 0, 0, 1, 1);

        mLayerDownButton = new QPushButton(mLayerOrderTab);
        mLayerDownButton->setObjectName(QStringLiteral("mLayerDownButton"));

        gridLayout1->addWidget(mLayerDownButton, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(391, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        mLayerOrderTreeWidget = new QTreeWidget(mLayerOrderTab);
        mLayerOrderTreeWidget->setObjectName(QStringLiteral("mLayerOrderTreeWidget"));
        mLayerOrderTreeWidget->setColumnCount(2);

        gridLayout1->addWidget(mLayerOrderTreeWidget, 1, 0, 1, 3);

        mTabWidget->addTab(mLayerOrderTab, QString());
        mTilesetsTab = new QWidget();
        mTilesetsTab->setObjectName(QStringLiteral("mTilesetsTab"));
        gridLayout_3 = new QGridLayout(mTilesetsTab);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mTilesetsTableWidget = new QTableWidget(mTilesetsTab);
        if (mTilesetsTableWidget->columnCount() < 5)
            mTilesetsTableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mTilesetsTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mTilesetsTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        mTilesetsTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        mTilesetsTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        mTilesetsTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        mTilesetsTableWidget->setObjectName(QStringLiteral("mTilesetsTableWidget"));
        mTilesetsTableWidget->setAlternatingRowColors(true);
        mTilesetsTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        mTilesetsTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        mTilesetsTableWidget->setCornerButtonEnabled(false);
        mTilesetsTableWidget->verticalHeader()->setVisible(false);

        gridLayout_3->addWidget(mTilesetsTableWidget, 0, 0, 1, 1);

        mTabWidget->addTab(mTilesetsTab, QString());
        mSearchTab = new QWidget();
        mSearchTab->setObjectName(QStringLiteral("mSearchTab"));
        gridLayout2 = new QGridLayout(mSearchTab);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        mSearchTermLineEdit = new QLineEdit(mSearchTab);
        mSearchTermLineEdit->setObjectName(QStringLiteral("mSearchTermLineEdit"));

        gridLayout2->addWidget(mSearchTermLineEdit, 0, 0, 1, 1);

        mSearchButton = new QPushButton(mSearchTab);
        mSearchButton->setObjectName(QStringLiteral("mSearchButton"));

        gridLayout2->addWidget(mSearchButton, 0, 1, 1, 1);

        mSearchTableWidget = new QTableWidget(mSearchTab);
        if (mSearchTableWidget->columnCount() < 3)
            mSearchTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        mSearchTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        mSearchTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        mSearchTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        mSearchTableWidget->setObjectName(QStringLiteral("mSearchTableWidget"));
        mSearchTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        mSearchTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        mSearchTableWidget->setCornerButtonEnabled(false);
        mSearchTableWidget->verticalHeader()->setVisible(false);

        gridLayout2->addWidget(mSearchTableWidget, 1, 0, 1, 2);

        mSearchAddButton = new QPushButton(mSearchTab);
        mSearchAddButton->setObjectName(QStringLiteral("mSearchAddButton"));

        gridLayout2->addWidget(mSearchAddButton, 2, 0, 1, 2);

        mTabWidget->addTab(mSearchTab, QString());

        gridLayout_2->addWidget(mTabWidget, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        mSelectedCRSLabel->setBuddy(mChangeCRSButton);
        mLayerNameLabel->setBuddy(mLayerNameLineEdit);
        mTileSizeLabel->setBuddy(mTileWidthLineEdit);
        mFeatureCountLabel->setBuddy(mFeatureCountLineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mTabWidget, mConnectionsComboBox);
        QWidget::setTabOrder(mConnectionsComboBox, mConnectButton);
        QWidget::setTabOrder(mConnectButton, mNewButton);
        QWidget::setTabOrder(mNewButton, mEditButton);
        QWidget::setTabOrder(mEditButton, mDeleteButton);
        QWidget::setTabOrder(mDeleteButton, mLoadButton);
        QWidget::setTabOrder(mLoadButton, mSaveButton);
        QWidget::setTabOrder(mSaveButton, mAddDefaultButton);
        QWidget::setTabOrder(mAddDefaultButton, mLayersTreeWidget);
        QWidget::setTabOrder(mLayersTreeWidget, mTimeComboBox);
        QWidget::setTabOrder(mTimeComboBox, mChangeCRSButton);
        QWidget::setTabOrder(mChangeCRSButton, mFormatComboBox);
        QWidget::setTabOrder(mFormatComboBox, mLayerNameLineEdit);
        QWidget::setTabOrder(mLayerNameLineEdit, mTileWidthLineEdit);
        QWidget::setTabOrder(mTileWidthLineEdit, mTileHeightLineEdit);
        QWidget::setTabOrder(mTileHeightLineEdit, mFeatureCountLineEdit);
        QWidget::setTabOrder(mFeatureCountLineEdit, mCacheComboBox);
        QWidget::setTabOrder(mCacheComboBox, mLayerUpButton);
        QWidget::setTabOrder(mLayerUpButton, mLayerDownButton);
        QWidget::setTabOrder(mLayerDownButton, mLayerOrderTreeWidget);
        QWidget::setTabOrder(mLayerOrderTreeWidget, mTilesetsTableWidget);
        QWidget::setTabOrder(mTilesetsTableWidget, mSearchTermLineEdit);
        QWidget::setTabOrder(mSearchTermLineEdit, mSearchButton);
        QWidget::setTabOrder(mSearchButton, mSearchTableWidget);
        QWidget::setTabOrder(mSearchTableWidget, mSearchAddButton);
        QWidget::setTabOrder(mSearchAddButton, mDialogButtonBox);

        retranslateUi(QgsOWSSourceSelectBase);
        QObject::connect(mDialogButtonBox, SIGNAL(rejected()), QgsOWSSourceSelectBase, SLOT(reject()));

        mTabWidget->setCurrentIndex(0);
        mSearchButton->setDefault(true);


        QMetaObject::connectSlotsByName(QgsOWSSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsOWSSourceSelectBase)
    {
        QgsOWSSourceSelectBase->setWindowTitle(QApplication::translate("QgsOWSSourceSelectBase", "Add Layer(s) from a Server", Q_NULLPTR));
        mStatusLabel->setText(QApplication::translate("QgsOWSSourceSelectBase", "Ready", Q_NULLPTR));
        mConnectButton->setText(QApplication::translate("QgsOWSSourceSelectBase", "C&onnect", Q_NULLPTR));
        mNewButton->setText(QApplication::translate("QgsOWSSourceSelectBase", "&New", Q_NULLPTR));
        mEditButton->setText(QApplication::translate("QgsOWSSourceSelectBase", "Edit", Q_NULLPTR));
        mDeleteButton->setText(QApplication::translate("QgsOWSSourceSelectBase", "Delete", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLoadButton->setToolTip(QApplication::translate("QgsOWSSourceSelectBase", "Load connections from file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLoadButton->setText(QApplication::translate("QgsOWSSourceSelectBase", "Load", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mSaveButton->setToolTip(QApplication::translate("QgsOWSSourceSelectBase", "Save connections to file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mSaveButton->setText(QApplication::translate("QgsOWSSourceSelectBase", "Save", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        mAddDefaultButton->setStatusTip(QApplication::translate("QgsOWSSourceSelectBase", "Adds a few example WMS servers", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        mAddDefaultButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        mAddDefaultButton->setText(QApplication::translate("QgsOWSSourceSelectBase", "Add default servers", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = mLayersTreeWidget->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("QgsOWSSourceSelectBase", "Abstract", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsOWSSourceSelectBase", "Title", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsOWSSourceSelectBase", "Name", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsOWSSourceSelectBase", "ID", Q_NULLPTR));
        mTimeLabel->setText(QApplication::translate("QgsOWSSourceSelectBase", "Time", Q_NULLPTR));
        mCRSLabel->setText(QApplication::translate("QgsOWSSourceSelectBase", "Coordinate Reference System:", Q_NULLPTR));
        mSelectedCRSLabel->setText(QApplication::translate("QgsOWSSourceSelectBase", "Selected Coordinate Reference System", Q_NULLPTR));
        mChangeCRSButton->setText(QApplication::translate("QgsOWSSourceSelectBase", "Change...", Q_NULLPTR));
        mFormatLabel->setText(QApplication::translate("QgsOWSSourceSelectBase", "Format", Q_NULLPTR));
        mWMSGroupBox->setTitle(QApplication::translate("QgsOWSSourceSelectBase", "Options", Q_NULLPTR));
        mLayerNameLabel->setText(QApplication::translate("QgsOWSSourceSelectBase", "Layer name", Q_NULLPTR));
        mTileSizeLabel->setText(QApplication::translate("QgsOWSSourceSelectBase", "Tile size", Q_NULLPTR));
        mFeatureCountLabel->setText(QApplication::translate("QgsOWSSourceSelectBase", "Feature limit for GetFeatureInfo", Q_NULLPTR));
        mCacheLabel->setText(QApplication::translate("QgsOWSSourceSelectBase", "Cache", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mCacheComboBox->setToolTip(QApplication::translate("QgsOWSSourceSelectBase", "Cache preference\n"
"\n"
"Always cache: load from cache, even if it expired\n"
"\n"
"Prefer cache: load from cache if available, otherwise load from network. Note that this can return possibly stale (but not expired) items from cache\n"
"\n"
"Prefer network: default value; load from the network if the cached entry is older than the network entry\n"
"\n"
"Always network: always load from network and do not check if the cache has a valid entry (similar to the \"Reload\" feature in browsers)\n"
"", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mTabWidget->setTabText(mTabWidget->indexOf(mLayersTab), QApplication::translate("QgsOWSSourceSelectBase", "Layers", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLayerUpButton->setToolTip(QApplication::translate("QgsOWSSourceSelectBase", "Move selected layer UP", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLayerUpButton->setText(QApplication::translate("QgsOWSSourceSelectBase", "Up", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLayerDownButton->setToolTip(QApplication::translate("QgsOWSSourceSelectBase", "Move selected layer DOWN", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLayerDownButton->setText(QApplication::translate("QgsOWSSourceSelectBase", "Down", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem1 = mLayerOrderTreeWidget->headerItem();
        ___qtreewidgetitem1->setText(1, QApplication::translate("QgsOWSSourceSelectBase", "Style", Q_NULLPTR));
        ___qtreewidgetitem1->setText(0, QApplication::translate("QgsOWSSourceSelectBase", "Layer", Q_NULLPTR));
        mTabWidget->setTabText(mTabWidget->indexOf(mLayerOrderTab), QApplication::translate("QgsOWSSourceSelectBase", "Layer Order", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = mTilesetsTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsOWSSourceSelectBase", "Layers", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = mTilesetsTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsOWSSourceSelectBase", "Styles", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = mTilesetsTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("QgsOWSSourceSelectBase", "Size", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = mTilesetsTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("QgsOWSSourceSelectBase", "Format", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = mTilesetsTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("QgsOWSSourceSelectBase", "CRS", Q_NULLPTR));
        mTabWidget->setTabText(mTabWidget->indexOf(mTilesetsTab), QApplication::translate("QgsOWSSourceSelectBase", "Tilesets", Q_NULLPTR));
        mSearchButton->setText(QApplication::translate("QgsOWSSourceSelectBase", "Search", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = mSearchTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("QgsOWSSourceSelectBase", "Title", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = mSearchTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("QgsOWSSourceSelectBase", "Description", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = mSearchTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("QgsOWSSourceSelectBase", "URL", Q_NULLPTR));
        mSearchAddButton->setText(QApplication::translate("QgsOWSSourceSelectBase", "Add selected row to WMS list", Q_NULLPTR));
        mTabWidget->setTabText(mTabWidget->indexOf(mSearchTab), QApplication::translate("QgsOWSSourceSelectBase", "Server Search", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsOWSSourceSelectBase: public Ui_QgsOWSSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSOWSSOURCESELECTBASE_H
