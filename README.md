# Лабораторная работа 7. Преобразование и анализ кода с использованием Clang и LLVM
# Установка и подготовка среды
Команда установки: `sudo apt install clang llvm`
![изображение](https://github.com/user-attachments/assets/6fa51ba4-496c-4213-9fff-f364ccee15b9)

# Код программы
```
#include <stdio.h>
int square(int x) {
return x * x;
}
int main() {
int a = 5;
int b = square(a);
printf("%d\n", b);
return 0;
}
```
# Получение AST
Команда: `clang -Xclang -ast-dump -fsyntax-only square.c`
Получили такое:
![изображение](https://github.com/user-attachments/assets/fea0c68e-616c-48ba-b6be-49fb6e17dc3a)

# Генерация LLVM IR
Команда: `clang -S -emit-llvm square.c -o square.ll`
![изображение](https://github.com/user-attachments/assets/58257d50-44ea-436c-9ef9-4e3ec58b3e87)
Полученное промежуточное представление:
![изображение](https://github.com/user-attachments/assets/277d29cb-eed5-4175-83db-438c206f3a94)

# Оптимизация IR
Команда: `clang -O0 -S -emit-llvm square.c -o square_O0.ll`
IR с оптимизацией O0:
![изображение](https://github.com/user-attachments/assets/7de7a88c-b701-466d-a24f-3823b327a9a6)
Нет отлчий от исходной версии:
![изображение](https://github.com/user-attachments/assets/9c3a0210-1409-4b26-84d4-adaa7c4bb794)

IR c оптимизацией O2:
![изображение](https://github.com/user-attachments/assets/7ca2c32a-bfd9-4b53-817f-c5febcfe38a3)

Отличия O0 и O2 оптимизаций:
![изображение](https://github.com/user-attachments/assets/8a947c00-04ad-458d-bec6-aa5bbb73b3f1)

#Граф потока управления программы

