CC = gcc
CFLAGS = -std=c99 -O3
FC = gfortran
FFLAGS = -O3
LD = gcc

TARGET = a.out

OBJS = main.o add_c.o add_copt.o add_fortran.o

.SUFFIXES:
.SUFFIXES: .c .f90 .o
.c.o:
	$(CC) $(CFLAGS) -c $<
.f90.o:
	$(FC) $(FFLAGS) -c $<

$(TARGET):$(OBJS)
	$(LD) -o $@ $^

clean:
	rm -f $(TARGET) $(OBJS)
