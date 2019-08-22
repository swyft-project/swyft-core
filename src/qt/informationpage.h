// Copyright (c) 2019 Riku Block
// Copyright (c) 2019 The Swyft Core developers
// Copyright (c) 2019 The Swyft Core developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef INFORMATION_H
#define INFORMATION_H

#include "platformstyle.h"

#include <QWidget>

namespace Ui {
    class InformationPage;
}

class ClientModel;
class WalletModel;

class InformationPage : public QWidget
{
    Q_OBJECT

public:
    explicit InformationPage(const PlatformStyle *platformStyle, QWidget *parent = 0);
    ~InformationPage();

    void setClientModel(ClientModel *clientModel);
    void setWalletModel(WalletModel *walletModel);


private:
    Ui::InformationPage *ui;
    ClientModel *clientModel;
    WalletModel *walletModel;

};
#endif // INFORMATION_H
