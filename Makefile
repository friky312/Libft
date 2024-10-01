#Define el nombre de la librería a generar
NAME = libft.a

#Define un archivo con ese nombre
BONUS_NAME = .bonus

#El compilador que se usa
CC = gcc

#Las flags de compilación
#	-c: Compila cada archivo fuente (.c) en un objeto (.o) sin crear el ejecutable
#	-Wall: Habilita todas las advertencias recomendadas por el compilador
#	-Werror: Convierte todas las advertencias en errores(no compila si hay advertencias)
#	-Wextra: Habilita advertencias adicionales que  -Wall no incluye
#	-I: Especifica los directorios donde buscarr archivos de cabecera(.h)
CCFLAGS = -c -Wall -Werror -Wextra -I

#ar es una herramienta para crear archivos de librería estática
#-rcs:
#	r inserta los archivos en la librería reemplazando versisones anteriores
#	c crea la librería si no existe
#	s crea uun índice para hacer que la librería sea más eficiente en la búsqueda de símbolos
AR = ar -rcs

#rm es el comando para eliminar archivos
#	-f  fuerza la eliminción ignorando archivos existentes y sin pedir confirmación
RM = rm -f

#Lista todos los archivos fuentes(.c) que forman parte de la librería
SRC = ft_isalnum.c \
ft_isalpha.c \
ft_isdigit.c \
ft_isascii.c \
ft_isprint.c \
ft_strlen.c \
ft_memset.c \
ft_bzero.c \
ft_memcpy.c \
ft_memmove.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_toupper.c \
ft_tolower.c \
ft_strchr.c \
ft_strrchr.c \
ft_strncmp.c \
ft_memchr.c \
ft_memcmp.c \
ft_strnstr.c \
ft_atoi.c \
ft_calloc.c \
ft_strdup.c \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c \
ft_split.c \
ft_itoa.c \
ft_strmapi.c \
ft_striteri.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c

#Esta línea convierte la lista de archivos .c en archivos .o 
#	$(SRC:.c=.o): crea un archivo .o para cada .c
OBJ = $(SRC:.c=.o)

#Define los archivos fuente que corresponden a las funciones bonus
BONUSSRC = ft_lstnew_bonus.c \
ft_lstadd_front_bonus.c \
ft_lstsize_bonus.c \
ft_lstlast_bonus.c \
ft_lstadd_back_bonus.c \
ft_lstdelone_bonus.c \
ft_lstclear_bonus.c \
ft_lstiter_bonus.c \
ft_lstmap_bonus.c

#Como la variable OBJ pero para el bonus
BONUSOBJ = $(BONUSSRC:.c=.o)

#Hace que el objetivo ${NAME} se ejecute, crea la librería libft.a
all: ${NAME}

#Toma todos los objetos y ejecuta el comando $(AR) para crear la librería libft.a
${NAME}: $(OBJ)
		$(AR) $(NAME) $(OBJ)

#Hace que el objetivo ${BONUS_NAME} se ejecute, compila el bonus y lo añade a la librería libft.a
bonus: $(BONUS_NAME)

#Toma los archivos objetos del bonus y los añade a la librería estática utilizando ar
$(BONUS_NAME): $(BONUSOBJ)
		ar rcs $(NAME) $(BONUSOBJ)
		ar rcs $(BONUS_NAME) $(BONUSOBJ)

#Indica cómo compilar os archivos .c en .o
#	El comando $(CC) invoca al compilador con las flags definidas para compilar el archivo .c en el .o
%.o: %.c
		$(CC) $(CCFLAGS) -c -o $@ $<

#Elimina los .o
clean:
		$(RM) $(OBJ) $(BONUSOBJ)

#Ejecuta clean y elimina la librería libft.a
fclean: clean
		$(RM) $(NAME)

#Eimina todo y lo recompila de nuevo ejecutando el all
re: fclean $(NAME)

#Le dice a make que estos nombres no corresponden a archivos sino a objetos para que no se confunda si existen archivos con esos nombres en el directorio
.PHONY: all, fclean, re, clean, bonus
