# ft_printf

This is a project where I implemented the behavior of the standard **printf** function from the **<stdio.h>** library. You can use the following specifiers:

<ul>
  <li>%c Prints a single character.</li>
  <li>%s Prints a string (as defined by the common C convention).</li>
  <li>%p Prints the void* pointer argument in hexadecimal format.</li>
  <li>%d Prints a decimal (base 10) number.</li>
  <li>%i Prints an integer in base 10.</li>
  <li>%u Prints an unsigned decimal (base 10) number.</li>
  <li>%x Prints a number in hexadecimal (base 16) lowercase format.</li>
  <li>%X Prints a number in hexadecimal (base 16) uppercase format.</li>
  <li>%% Prints a percent sign.</li>
</ul>

I suggest you **avoid using dynamic memory allocation** (malloc, free) in this case, because it is possible to write this project without it. This approach will save you from some unexpected issues and help you pass this project more easily.

I did **not** use libft in this project, but I updated the Makefile to allow working with that library. To use libft, you should also include the libft.h header in ft_printf.h.

![Grade](https://github.com/user-attachments/assets/0b33f259-b404-48db-b84a-75f23529dd26)
