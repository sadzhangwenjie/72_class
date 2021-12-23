cc=gcc
file_list=main.o proc.o
bin=proc
$(bin):$(file_list)
	$(cc) -o $@ $^
%.o : %.c
	$(cc) -c $<

.PHONY:clean
clean:
	rm -f $(file_list) $(bin)
	
