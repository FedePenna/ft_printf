NAME = libftprintf.a # Name of the file that will be generated.

SRC = ft_printf.c\
       ft_utils_count.c\
       ft_putstr.c\
       ft_checkf.c\
       ft_pointer_c.c\
       ft_putnbr_base.c\

OBJS = $(SRC:.c=.o) # This variable will convert src .c files to object files .o

CC = cc # Compiler that is going to be used
CFLAGS = -Wall -Werror -Wextra # Flags
RM = rm -rf # Command used to remove files or directories
AR = ar crs # Command used to create archives (static library)

# RULES

$(NAME): $(OBJS)
	$(AR) $@ $^ # This will create the archive. $@ represents the target ('libft.a)
	            # while '$^' represents all the .o files needed. 

%.o: %.c # Generic rule that specifies that every .c file must be compiled into a .o file
	$(CC) $(CFLAGS) -c $< -o $@ # This will compile every .c file into a .o file. $< is the source file, $@ is the object file.

all: $(NAME) # Default target. It will build libftprintf.a. This is what will be executed if we just execute 'make'

clean: # This rule will delete all the .o files and bonus .o files. It won't erase $(NAME).
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME) # Clean but also removes $(NAME).

re: fclean all # This will first execute fclean and then all. This will make sure everything will be compiled using new files, without using cached or old files.

.PHONY: all clean fclean re bonus # Without using .PHONY make can be tricked by the presence of files with the same names as the targets and decide not to run the targets. 
# With .PHONY make will always execute the targets, even if files with the same name exist, ensuring that commands will always be executed.
