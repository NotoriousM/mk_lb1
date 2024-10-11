#include "bit_operations.h"
#include <stdio.h>

int main() {
    // Пример для uint8_t
    uint8_t value8 = 0xAA;  // 10101010 в двоичной системе
    uint8_t mask8 = 0x0F;   // Маска для младших 4 бит

    // Установка битов в 1 по маске
    value8 = SET_BITS(value8, mask8);
    printf("uint8_t after setting bits: 0x%X\n", value8);

    // Установка битов в 0 по маске
    value8 = CLEAR_BITS(value8, mask8);
    printf("uint8_t after clearing bits: 0x%X\n", value8);

    // Инверсия битов по маске
    value8 = TOGGLE_BITS(value8, mask8);
    printf("uint8_t after toggling bits: 0x%X\n", value8);

    // Логический сдвиг вправо
    value8 = LOGICAL_SHIFT_RIGHT(value8, 2);
    printf("uint8_t after logical shift right: 0x%X\n", value8);

    // Циклический сдвиг влево
    value8 = ROTATE_LEFT_8(value8, 3);
    printf("uint8_t after rotate left 8: 0x%X\n", value8);

    // Пример для uint16_t
    uint16_t value16 = 0xA5A5; // 1010010110100101 в двоичной системе
    uint16_t mask16 = 0x00FF;  // Маска для младшего байта

    // Установка битов в 1 по маске
    value16 = SET_BITS(value16, mask16);
    printf("uint16_t after setting bits: 0x%X\n", value16);

    // Установка битов в 0 по маске
    value16 = CLEAR_BITS(value16, mask16);
    printf("uint16_t after clearing bits: 0x%X\n", value16);

    // Инверсия битов по маске
    value16 = TOGGLE_BITS(value16, mask16);
    printf("uint16_t after toggling bits: 0x%X\n", value16);

    // Логический сдвиг вправо
    value16 = LOGICAL_SHIFT_RIGHT(value16, 3);
    printf("uint16_t after logical shift right: 0x%X\n", value16);

    // Циклический сдвиг влево
    value16 = ROTATE_LEFT_16(value16, 4);
    printf("uint16_t after rotate left 16: 0x%X\n", value16);

    // Пример для uint32_t
    uint32_t value32 = 0xA5A5A5A5; // 10100101101001011010010110100101
    uint32_t mask32 = 0x0000FFFF;  // Маска для младших 16 бит

    // Установка битов в 1 по маске
    value32 = SET_BITS(value32, mask32);
    printf("uint32_t after setting bits: 0x%X\n", value32);

    // Установка битов в 0 по маске
    value32 = CLEAR_BITS(value32, mask32);
    printf("uint32_t after clearing bits: 0x%X\n", value32);

    // Инверсия битов по маске
    value32 = TOGGLE_BITS(value32, mask32);
    printf("uint32_t after toggling bits: 0x%X\n", value32);

    // Логический сдвиг вправо
    value32 = LOGICAL_SHIFT_RIGHT(value32, 5);
    printf("uint32_t after logical shift right: 0x%X\n", value32);

    // Циклический сдвиг вправо
    value32 = ROTATE_RIGHT_32(value32, 8);
    printf("uint32_t after rotate right 32: 0x%X\n", value32);

    return 0;
}
