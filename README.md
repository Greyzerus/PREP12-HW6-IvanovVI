# PREP12-HW6-IvanovVI
Иванов Виталий - Шестое ДЗ<br>
42 в списке -> вариант 8<br><br>

Вариант 8.
Реализовать базовый  класс  «Вычисление  определённого  интеграла», <br>
содержащий чисто виртуальный метод для вычисления значения интеграла <br>
(которому в качестве параметра должен передаваться указатель на целевую <br>
подынтегральную функцию), поля-данные задающие начало и конец отрезка <br>
интегрирования,  а  также  число  отрезков  разбиения.<br>
Создать  производные классы «Метод   трапеций» и «Метод   парабол»,<br>
реализующие соответствующие численные методы.<br>
Метод  для  вычисления  значения интеграла  в  базовом  классе<br>
должен  осуществлять  разбиение фигуры  под графиком  подынтегральной  функции<br>
на  соответствующие  части,  а  потом собирать  результаты  вычисления<br>
площадей  этих  частей  на  основе результатов   функций,<br>
реализованных   в   производных   классах.<br>
Продемонстрировать работу реализованных методов.<br><br>

Комментарии к реализации:<br>
Интегрируемая функция описывается в main.cpp<br>
Makefile собирает программу в исполняемый файл HW6.<br><br>
