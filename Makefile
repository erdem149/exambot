all:
	@gcc ./src_c/exemshell.c -lreadline -o examshell
check:
	@gcc ./src_c/user_authentication.c libft.a -lreadline -o user_authentication
g:
	@gcc ./src_c/user_authentication_login.c get_next_line/get_next_line.c get_next_line/get_next_line_utils.c libft.a -lreadline -o user_authentication_login