all:
	@gcc exemshell.c -lreadline -o examshell
check:
	@gcc user_authentication.c ./libft/libft.a -lreadline -o user_authentication