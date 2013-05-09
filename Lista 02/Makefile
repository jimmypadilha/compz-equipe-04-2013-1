FLEX = flex
GCC = gcc
HASH = valida_email
EMAIL=email.txt

.PHONY: clean teste

# This is the default task
compile:
	@ $(FLEX) -o $(HASH).lex.c $(HASH).lex
	@ $(GCC) -o $(HASH) $(HASH).lex.c -lfl

clean:
	@ echo Cleaning...
	@ rm -rf *.*~
	@ rm -rf *~
	find . -name  *.lex.c -print0 | xargs -0 rm -rf
	find . -name  *.c -print0 | xargs -0 rm -rf
	@ rm -rf $(HASH)
	

teste:  
	@ ./$(HASH) $(EMAIL)
