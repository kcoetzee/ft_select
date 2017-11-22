#include "header.h"

void	clear_screen(void)
{
	char *command;
	char buf[30];
	char *ap = buf;

	command = tgetstr("cl", &ap);
	ft_putstr(command);
}

void	move_cursor(int hpos, int vpos)
{
	char *command;
	char buf[30];
	char *ap = buf;

	command = tgetstr("cm", &ap);
	ft_putstr(tgoto(command, hpos, vpos));
}

void	start_highlight(void)
{
	char *command;
	char buf[30];
	char *ap = buf;

	command = tgetstr("so", &ap);
	ft_putstr(command);
}

void	end_highlight(void)
{
	char *command;
	char buf[30];
	char *ap = buf;

	command = tgetstr("se", &ap);
	ft_putstr(command);
}