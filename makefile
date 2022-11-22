GC = gcc
AR = ar
MAIN = main.o
LOOP = advancedClassificationLoop.o
RECUR =advancedClassificationRecursion.o
BASE = basicClassification.o
WARN= -Wall -g
all:recursived recursives loopd loops maindloop maindrec mains
mains:	$(MAIN) recursives
		$(GC) $(WARN) $(MAIN) libclassrec.a -o mains -lm
maindloop: $(MAIN) loopd
			$(GC) $(WARN) $(MAIN) ./libclassloops.so -o maindloop 
maindrec: $(MAIN) recursived
			$(GC) $(WARN) $(MAIN) ./libclassrec.so -o maindrec -lm
loops:  $(LOOP) $(BASE)
		$(AR) -rcs libclassloops.a  $(LOOP) $(BASE)
loopd:  $(LOOP) $(BASE)
		$(GC) -shared -fPIC -o libclassloops.so  $(LOOP) $(BASE)
recursives:  $(RECUR) $(BASE)
			$(AR) -rcs libclassrec.a  $(RECUR) $(BASE)
recursived:  $(RECUR) $(BASE)
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
