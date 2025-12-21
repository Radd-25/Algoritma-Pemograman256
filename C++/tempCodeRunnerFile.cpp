 switch (menu) {
            case 1:
                cout << "Saldo: Rp " << saldo << endl;
                break;

            case 2:
                cout << "Jumlah tarik: Rp ";
                cin >> jml;
                if (jml > 0) {
                    if (jml <= saldo) {
                        saldo -= jml;
                        cout << "Tarik berhasil. Saldo sekarang: Rp " << saldo << endl;
                    } else {
                        cout << "Saldo kurang!\n";
                    }
                } else {
                    cout << "Jumlah tarik tidak valid!\n";
                }
                break;

            case 3:
                cout << "Jumlah setor: Rp ";
                cin >> jml;
                if (jml > 0) {
                    saldo += jml;
                    cout << "Setor berhasil. Saldo sekarang: Rp " << saldo << endl;
                } else {
                    cout << "Jumlah setor tidak valid!\n";
                }
                break;

            case 4:
                cout << "Jumlah transfer: Rp ";
                cin >> jml;
                if (jml > 0) {
                    if (jml <= saldo) {
                        saldo -= jml;
                        cout << "Transfer berhasil. Saldo sekarang: Rp " << saldo << endl;
                    } else {
                        cout << "Saldo kurang!\n";
                    }
                } else {
                    cout << "Jumlah transfer tidak valid!\n";
                }
                break;

            case 5:
                cout << "Terima kasih.\n";
                break;

            default:
                cout << "Menu tidak valid!\n";
        }

    } while (menu != 5);
