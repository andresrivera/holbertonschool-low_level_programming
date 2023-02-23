#include "main.h"

/**
* print_to_98 - function
* @n: number to begin
* Description: Print all natural numbers from n to 98
*
* Return: Always 0
*/
void print_to_98(int n)
{
  int first_digit, second_digit, last_digit, number;

  if (n <= 98)
    {
      if (n > 0 &&  n <= 98)
	  {
	    if (n == 98)
	      {
	    _putchar('9');
	    _putchar('8');
	    _putchar('\n');
	      }
	    else
	      {
		while (n <= 98)
		  {
		first_digit = n / 10;
		last_digit = n % 10;
	        _putchar(first_digit + '0');
		_putchar(last_digit + '0');
		if (n != 98)
		  {
		    _putchar(',');
		    _putchar(' ');
		  }
		else
		  {
		    _putchar('\n');
		  }
		n++;
		  }
	      }
	  }


      else if (n <= 0)
	{
	  if (n == 0)
	    {
	      _putchar('0');
	      _putchar('\n');
	    }
	  else
	    {
	      while (n <= 98)
		{
		  if (n < 0)
		    {
		      number = (-1) * n;
		      while (number > 0)
			{
			
			  first_digit = number / 10;
			  last_digit = number % 10;
			  if (first_digit != 0)
			    {
			      _putchar('$');
			      /* _putchar(first_digit + 48);*/
			    }
			  _putchar(last_digit + '0');
			  _putchar(',');
			  _putchar(' ');
			  number--;
			}

		    }

		  
		  first_digit = n / 10;
		  last_digit = n % 10;
		  if (first_digit == 0 || n == 0)
		    {
		      _putchar(last_digit + '0');
		    }
		  else
		    {
		      _putchar(first_digit + '0');
		  _putchar(last_digit + '0');
		    }
		  n++;
		}
	    
	      
	    }
	    }
	
      
    }
  else
    {
      
	  while (n >= 98)
	    {
	      
	      last_digit = n % 10;
	      first_digit = n / 10;
	      
	     
	      if (n >= 100)
		{
		  first_digit = first_digit / 10;
		  second_digit = (n / 10) % 10;
		 _putchar(first_digit + '0');
	      _putchar(second_digit + '0');
		}
	      else
		{
		  _putchar(first_digit + '0');
		}
		 _putchar(last_digit + '0');
		       if (n == 98)
			 {
			 _putchar('\n');
			 }
		       else
			 {
			   _putchar(',');
			   _putchar(' ');
			 }
		       n--;
		       
	    }
    
       }  
}
