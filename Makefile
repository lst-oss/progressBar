probar:proBar.c main.c
	gcc main.c proBar.c -o probar

.PHRON:clean
clean:
	rm -f probar
