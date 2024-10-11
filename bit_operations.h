#ifndef BIT_OPERATIONS_H
#define BIT_OPERATIONS_H

#include <stdint.h> // Для использования uint8_t, uint16_t, uint32_t

// Макросы для установки битов в единицы по маске
#define SET_BITS(value, mask) ((value) | (mask))

// Макросы для установки битов в нули по маске
#define CLEAR_BITS(value, mask) ((value) & ~(mask))

// Макросы для инверсии битов по маске
#define TOGGLE_BITS(value, mask) ((value) ^ (mask))

// Логический сдвиг вправо
#define LOGICAL_SHIFT_RIGHT(value, shift) ((value) >> (shift))

// Логический сдвиг влево
#define LOGICAL_SHIFT_LEFT(value, shift) ((value) << (shift))

// Циклический сдвиг вправо для 8-битного числа
#define ROTATE_RIGHT_8(value, shift) (((value) >> (shift)) | ((value) << (8 - (shift))))

// Циклический сдвиг влево для 8-битного числа
#define ROTATE_LEFT_8(value, shift) (((value) << (shift)) | ((value) >> (8 - (shift))))

// Циклический сдвиг вправо для 16-битного числа
#define ROTATE_RIGHT_16(value, shift) (((value) >> (shift)) | ((value) << (16 - (shift))))

// Циклический сдвиг влево для 16-битного числа
#define ROTATE_LEFT_16(value, shift) (((value) << (shift)) | ((value) >> (16 - (shift))))

// Циклический сдвиг вправо для 32-битного числа
#define ROTATE_RIGHT_32(value, shift) (((value) >> (shift)) | ((value) << (32 - (shift))))

// Циклический сдвиг влево для 32-битного числа
#define ROTATE_LEFT_32(value, shift) (((value) << (shift)) | ((value) >> (32 - (shift))))

#endif // BIT_OPERATIONS_H
