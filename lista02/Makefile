FLEX = flex
GCC = gcc
HASH = valida_email
EMAIL0=email0.txt
RESULT0=resultado0.txt

.PHONY: clean teste

# This is the default task
compile:
	@ $(FLEX) –o $(HASH).lex.c $(HASH).lex
	@ $(GCC) -o $(HASH) $(HASH).lex.c –lfl

clean:
	@ echo Cleaning...
	rm -rf $(BIN_DIR)/
	find . -name  *.*~ -print0 | xargs -0 rm -rf
	find . -name  *~ -print0 | xargs -0 rm -rf
	@ echo

teste:  
	@ ./$(HASH) $(EMAIL0) > $(RESULT0)
