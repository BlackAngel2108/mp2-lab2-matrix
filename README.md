# Методы программирования 2: Верхнетреугольные матрицы на шаблонах

[![Build Status](https://travis-ci.org/UNN-VMK-Software/mp2-lab1-set.svg)][travis]

<!-- TODO
  -
-->

## Цели и задачи

В лабораторной работе ставится задача создания программных средств, поддерживающих хранение матриц и выполнение основных операций над ними:

- сложение/вычитание;
- копирование;
- сравнение.

В процессе выполнения лабораторной работы требуется использовать систему контроля версий [Git][git] и фрэймворк для разработки модульных тестов [Google Test][gtest].

Перед выполнением работы студенты получают данный проект-шаблон, содержащий следующее:

 - Интерфейсы классов Вектор и Матрица (h-файл)
 - Начальный набор готовых тестов для каждого из указанных классов.
 - Набор заготовок тестов для каждого из указанных классов. 
 - Тестовый пример использования класса Матрица

Выполнение работы предполагает решение следующих задач:

  1. Реализация методов шаблонного класса `TDynamicVector` согласно заданному интерфейсу.
  1. Реализация методов шаблонного класса `TDynamicMatrix` согласно заданному интерфейсу.
  1. Обеспечение работоспособности тестов и примера использования.
  1. Реализация заготовок тестов, покрывающих все методы классов `TDynamicVector` и `TDynamicMatrix`.
  1. Модификация примера использования в тестовое приложение, позволяющее задавать матрицы и осуществлять основные операции над ними.

## Используемые инструменты

  - Система контроля версий [Git][git]. Рекомендуется использовать один из
    следующих клиентов на выбор студента:
    - [Git](https://git-scm.com/downloads)
    - [GitHub Desktop](https://desktop.github.com)
  - Фреймворк для написания автоматических тестов [Google Test][gtest]. Не
    требует установки, идет вместе с проектом-шаблоном.
  - Среда разработки Microsoft Visual Studio (2019 или старше).

## Общая структура проекта

Структура проекта:

  - `gtest` — библиотека Google Test.
  - `include` — директория для размещения заголовочных файлов.
  - `samples` — директория для размещения тестового приложения.
  - `sln` — директория с файлами решений и проектов для VS 2008 и VS 2010,
    вложенные директории `vc9` и `vc10` соответственно.
  - `test` — директория с модульными тестами и основным приложением,
    инициализирующим запуск тестов.
  - `README.md` — информация о проекте, которую вы сейчас читаете.
  - Служебные файлы
    - `.gitignore` — перечень расширений файлов, игнорируемых Git при добавлении
      файлов в репозиторий.

В решении содержатся следующие модули:

  - Модуль `tmatirx`, содержащий реализацию классов Вектор и Матрица (файл
    `./include/tmatrix.h`). Поскольку оба класса шаблонные, реализацию методов необходимо выполнять непосредственно в заголовочном файле. При этом интерфейсы классов должны оставаться неизменными.
  - Тесты для классов Вектор и Матрица (файлы `./test/test_tvector.cpp`, `./test/test_tmatrix.cpp`).
  - Пример использования класса Матрица (файл `./samples/sample_matrix.cpp`).

<!-- LINKS -->

[git]:         https://git-scm.com/book/ru/v2
[gtest]:       https://github.com/google/googletest


