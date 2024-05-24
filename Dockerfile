# пока не актуально
# Используем образ с нужной версией Qt и CMake
FROM qt:6.6.1
# Устанавливаем CMake
RUN apt-get update && apt-get install -y cmake

# Копируем исходный код проекта в контейнер
COPY . /app

# Устанавливаем рабочую директорию
WORKDIR /app

# Запускаем сборку проекта
#RUN cmake .
RUN make

# Команда для запуска приложения
CMD ["./Maze_new"]