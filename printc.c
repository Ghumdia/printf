#include "main.h"

/**
 * _puts - prints string
 * @s: string
 *
 *Return: i
*/
                                                                  
int _puts(char *s)                                                
{                                                                 
        int i = 0;                                                
                                                                  
        while (s[i])                                              
        {                                                         
                _putchar(s[i]);                                   
                i++;                                              
        }                                                         
        return (i);                                               
} 

/**
 *  _print_str - prints string
 *  @args: argument list
 *
 *  Return: code
 */  
                                                                  
int _print_str(va_list args)                                      
{                                                                 
        return (_puts(va_arg(args, char *)));
}
