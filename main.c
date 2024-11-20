#include <stdio.h>
#include <float.h>

// ฟังก์ชันสำหรับแสดงข้อมูลประเภทจำนวนจริง (Real Data Type)
void displayFloatInfo() {
    printf("Storage size for float : %lu \n", sizeof(float));
    printf("-Minimum float : %g\n", (float) -FLT_MIN);
    printf("-Maximum float : %g\n", (float) FLT_MAX);
    printf("+Minimum float : %g\n", (float) FLT_MIN);
    printf("+Maximum float : %g\n\n", (float) FLT_MAX);

    printf("Storage size for double float : %lu \n", sizeof(double));
    printf("-Minimum double float : %g\n", (double) -DBL_MIN);
    printf("-Maximum double float : %g\n", (double) DBL_MAX);
    printf("+Minimum double float : %g\n", (double) DBL_MIN);
    printf("+Maximum double float : %g\n\n", (double) DBL_MAX);

    printf("Storage size for long double float : %lu \n", sizeof(long double));
    printf("-Minimum long double float : %Lg\n", (long double) -LDBL_MIN);
    printf("-Maximum long double float : %Lg\n", (long double) LDBL_MAX);
    printf("+Minimum long double float : %Lg\n", (long double) LDBL_MIN);
    printf("+Maximum long double float : %Lg\n\n", (long double) LDBL_MAX);
}

// ฟังก์ชันสำหรับคำนวณภาษีขาย
void calculateSalesTax() {
    const int taxrate = 7;  // ประกาศค่าคงที่อัตราภาษีเป็น 7%
    float itemcost, salestax;

    printf("Please Enter Cost of item : ");
    scanf("%f", &itemcost);

    salestax = (taxrate * itemcost) / 100;

    printf(" item Cost is = %.2f \n", itemcost);
    printf(" Sales tax is %.2f\n", salestax);
}

// ฟังก์ชันสำหรับแสดงข้อมูลเลขในระบบฐานต่าง ๆ
void displayOrdinalTypes() {
    int x = 0b1011;  // เลขฐานสอง
    int y = 0x10;    // เลขฐานสิบหก
    int z = 10;      // เลขฐานสิบ

    printf("x in Decimal      : %d\n", x);
    printf("x in Octal        : %o\n", x);
    printf("x in Hexadecimal  : %x\n\n", x);

    printf("y in Decimal      : %d\n", y);
    printf("y in Octal        : %o\n", y);
    printf("y in Hexadecimal  : %x\n\n", y);

    printf("z in Decimal      : %d\n", z);
    printf("z in Octal        : %o\n", z);
    printf("z in Hexadecimal  : %x\n\n", z);
}

int main(void) {
    printf("---- Real Data Type Information ----\n");
    displayFloatInfo();

    printf("---- Sales Tax Calculation ----\n");
    calculateSalesTax();

    printf("---- Ordinal Type Information ----\n");
    displayOrdinalTypes();

    return 0;
}
