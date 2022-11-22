GC = gcc
AR = ar
MAIN = main.o
LOOP = advancedClassificationLoop.o
RECUR =advancedClassificationRecursion.o
BASE = basicClassification.o
WARN= -Wall -g
all:recursived recursives loopd loops maindloop maindrec mains
mains:	$(MAIN) libclassrec.a
	$(GC) $(WARN) $(MAIN) libclassrec.a -o mains -lm
maindloop: $(MAIN) libclassloops.so
	$(GC) $(WARN) $(MAIN) ./libclassloops.so -o maindloop 
maindrec: $(MAIN) libclassrec.so
	$(GC) $(WARN) $(MAIN) ./libclassrec.so -o maindrec -lm
loops: libclassloops.a
libclassloops.a:  $(LOOP) $(BASE)
	$(AR) -rcs libclassloops.a  $(LOOP) $(BASE)
loopd: libclassloops.so
libclassloops.so:$(LOOP) $(BASE)
	$(GC) -shared -fPIC -o libclassloops.so  $(LOOP) $(BASE)
recursives: libclassrec.a
libclassrec.a: $(RECUR) $(BASE)
	$(AR) -rcs libclassrec.a  $(RECUR) $(BASE)
recursived: libclassrec.so
libclassrec.so: $(RECUR) $(BASE)
	$(GC) -shared -fPIC -o libclassrec.so $(RECUR) $(BASE)
main.o:  main.c Numclass.h 
	$(GC) $(WARN) -c main.c
advancedClassificationLoop.o: advancedClassificationLoop.c Numclass.h
			$(GC) $(WARN) -c advancedClassificationLoop.c 
advancedClassificationRecursion.o: advancedClassificationRecursion.c Numclass.h 
			$(GC) $(WARN) -c advancedClassificationRecursion.c 
basicClassification.o: basicClassification.c Numclass.h
			$(GC) $(WARN) -c basicClassification.c
clean: 
	rm -f *.o *.a *.so mains maindloop maindrec
