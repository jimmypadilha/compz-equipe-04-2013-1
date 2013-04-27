GCC=gcc
FILE=questao_2
EMAIL0=email0.txt
EMAIL1=email1.txt
EMAIL2=email2.txt
EMAIL3=email3.txt
EMAIL4=email4.txt
EMAIL5=email5.txt
EMAIL6=email6.txt
EMAIL7=email7.txt
EMAIL8=email8.txt
EMAIL9=email9.txt
RESULT0=resultado0.txt
RESULT1=resultado1.txt
RESULT2=resultado2.txt
RESULT3=resultado3.txt
RESULT4=resultado4.txt
RESULT5=resultado5.txt
RESULT6=resultado6.txt
RESULT7=resultado7.txt
RESULT8=resultado8.txt
RESULT9=resultado9.txt

.PHONY: clean

# This is the default task
compile:
	@ $(GCC) $(FILE).c -o $(FILE)
	@ ./$(FILE) $(EMAIL0) > $(RESULT0)
	@ ./$(FILE) $(EMAIL1) > $(RESULT1)
	@ ./$(FILE) $(EMAIL2) > $(RESULT2)
	@ ./$(FILE) $(EMAIL3) > $(RESULT3)
	@ ./$(FILE) $(EMAIL4) > $(RESULT4)
	@ ./$(FILE) $(EMAIL5) > $(RESULT5)
	@ ./$(FILE) $(EMAIL6) > $(RESULT6)
	@ ./$(FILE) $(EMAIL7) > $(RESULT7)
	@ ./$(FILE) $(EMAIL8) > $(RESULT8)
	@ ./$(FILE) $(EMAIL9) > $(RESULT9)
	
clean:
	@ echo Cleaning...
	rm -rf $(BIN_DIR)/
	find . -name  *.*~ -print0 | xargs -0 rm -rf
	find . -name  *~ -print0 | xargs -0 rm -rf
	@ echo
