OBJ = score.o eval.o classify.o output.o getscore.o
APPNAME = score

$(APPNAME):$(OBJ)						#	for linking
	gcc -o $(APPNAME) $(OBJ) -lcurl

%.o :	%.c			# compiling rule, for each .c file in the folder
	gcc -c -o $@	$<

clean	:
	rm $(OBJ)	$(APPNAME)

#end of file