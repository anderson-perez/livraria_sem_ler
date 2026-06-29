CC = gcc
DEL = rm
SRC = ./src
OBJS = ./objs

TARGET = livraria

all: objetos
	$(CC) $(OBJS)/main.o $(OBJS)/menus.o $(OBJS)/cadastros.o $(OBJS)/relatorios.o $(OBJS)/utils.o -o $(TARGET)

objetos:
	$(CC) -c $(SRC)/menus.c -o $(OBJS)/menus.o
	$(CC) -c $(SRC)/cadastros.c -o $(OBJS)/cadastros.o 
	$(CC) -c $(SRC)/utils.c -o $(OBJS)/utils.o
	$(CC) -c $(SRC)/relatorios.c -o $(OBJS)/relatorios.o
	$(CC) -c main.c -o $(OBJS)/main.o

limpar:
	$(DEL) $(OBJS)/*.o
	$(DEL) $(TARGET)
