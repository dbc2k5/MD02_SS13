#include <stdio.h>
#include <string.h>
int main() {
    char chuoi[100];
    printf("Nhap chuoi ky tu: ");
    scanf("%s", chuoi);
    int doDaiLonNhat = 0; // �o d�i cua chuoi ki tu ph�n biet lon nhat
    int batDauChuoiPhanBiet = 0; // Vi tr� bat dau cua chuoi ki tu ph�n biet lon nhat
    for (int i = 0; i < strlen(chuoi); i++) {
        int doDaiHienTai = 1; // �o d�i cua chuoi ki tu ph�n biet hien tai
        for (int j = i - 1; j >= 0; j--) {
            if (chuoi[i] == chuoi[j]) {
                break; // Neu ki tu tr�ng, tho�t vong lap
            }
            doDaiHienTai++; // Neu kh�ng tr�ng, tang do d�i
        }
        if (doDaiHienTai > doDaiLonNhat) {
            doDaiLonNhat = doDaiHienTai;
            batDauChuoiPhanBiet = i - doDaiHienTai + 1; // Cap nhat vi tr� bat dau
        }
    }
    printf("Chuoi phan biet co do dai lon nhat la %d: ", doDaiLonNhat);
    for (int i = batDauChuoiPhanBiet; i < batDauChuoiPhanBiet + doDaiLonNhat; i++) {
        printf("%c", chuoi[i]);
    }
    printf("\n");
    return 0;
}
