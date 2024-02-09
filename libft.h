/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherraiz <rherraiz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:52:53 by rherraiz          #+#    #+#             */
/*   Updated: 2024/02/08 14:55:58 by rherraiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
/* ft_isalpha  alfabetico*/

int			ft_isalpha(int c);

	/* ft_isdigit numero */

int			ft_isdigit(int c);

	/* ft_isalnum  alfanumerico*/

int			ft_isalnum(int c);

	/* ft_isascii ascii */

int			ft_isascii(int c);

	/* ft_isprint printable */

int			ft_isprint(int c);

	/* ft_strlen  retorna longitud string */

size_t		ft_strlen(const char *str);

	/* ft_ memset se utiliza para llenar un bloque de 
	 * mmemoria con un valor especifico
	 * ptr -> puntero al bloque de memoria que se va a llenar
	 * value -> valor que se utilizara para llenar la memoria
	 * num -> numero de bytes a llenar
	 * */

void		*ft_memset(void *ptr, int value, size_t num);

	/* ft_bzero parecida a memset, esta obsoleta
	 *  *
	 * */

void		ft_bzero(void *s, size_t n);

	/* ft_memcpy se utiliza para copiar un bloque de memoria
	 * de una ubicacion a otra.
	 */
	/* dest -> puntero al destino de la copia
	 * src -> puntero al origen de la copia
	 * n -> numero de bytes a copiar
	 */

void		*ft_memcpy(void *dest, const void *src, size_t n);

	/* ft_memmove se utiliza para copiar un bloque de memoria
	 * de una ubicacion a otra, similar a memcpy. sin embargo
	 * memcpy tiene la ventaja de manejar correctamente los casos
	 * en los que las areas de origen y destino se superponen. 
	 * 
	 * dest ->puntero al destino de la copia
	 * src -> puntero al origen de la copia
	 * n -> Numero de bytes a copiar.
	 *
	 * la longitud de la cadena se determina utilizando strlen(cadena) +1
	 * para incluir el caracter nulo.
	 */

void		*ft_memmove(void *dest, const void *src, size_t n);

	/* ft_strlcpy es una funcion de manipulacion de cadenas que se
	 * utiliza para copiar una cadena de origen a un destino, garantizando
	 * que el destino no exceda un tamaño especifico.
	 * garantiza que el destino este terminado con caracter nulo.
	 *
	 * devuelve la longitud del string
	 *
	 * dest -> puntero al destino de la copia
	 * src -> puntero al origen de la copia
	 * size -> tamaño maximo del destino
	 *
	 */
size_t		ft_strlcpy(char *dest, const char *src, size_t size);

	/* ft_strlcat es una funcion de manipulacion de cadenas que se utiliza
	 * para concatenar una cadena de origen a una cadena de destino
	 * garantizando que el destino no exceda un tamaño especifico.
	 * garantiza que el destino este terminado con caracter nulo.
	 *
	 * La función devuelve el tamaño total que habría tenido la cadena si no
	 * se hubiera producido el desbordamiento, independientemente del tamaño
	 * real del destino.
	 *
	 * dest -> puntero al destino de la concatenacion.
	 * src -> puntero al origen de la concatenacion.
	 * size -> tamaño maximo del destino.
	 *
	 */
size_t		ft_strlcat(char *dest, const char *src, size_t size);

	/* ft_toupper pone la cadena en mayusculas
	 *
	 */
int			ft_toupper(int c);

	/* ft_tolower pone la cadena en minusculas
	 *
	 */
int			ft_tolower(int c);

	/* ft_strchr se utiliza para buscar la primera aparicion
	 * de un caracter especifico en una cadena de caracteres.
	 * si se encuentra el caracter devuelve un puntero a la posicion
	 * del caracter en la cadena, de lo contrario devuelve null.
	 *
	 * str -> puntero a la cadena en la que se realizara la busqueda
	 * c -> caracter que se está buscando.
	 **/
char		*ft_strchr(const char *str, int c);

/* ft_strrchr se utiliza para buscar la ultima aparicion de
 * un caracter especifico en una cadena de caracteres.
 * si se encuentra el caracter devuelve un puntero a la posicion
 * del caracter en la cadena, de lo contrario devuelve null.
 *
 * str -> puntero a la cadena en la que se realiza la busqueda
 * c -> caracter que se esta buscando.
 * */
char		*ft_strrchr(const char *str, int c);

/* ft_strncmp se utiliza para comparar los primeros n caracteres
 * de dos cadenas de caracteres.
 * Devuelve 0 si las cadenas son iguales hasta el numero de caracteres
 * especificado ( n ) , negativo si la primera cadena es menor, y positivo
 * si la primera cadena es mayor.
 *
 * str1-> puntero a la primera cadena a comparar
 * str2 -> puntero a la segunda cadena a comparar
 * n -> numero de caracteres a comparar.
 *
 * */
int			ft_strncmp(const char *str1, const char *str2, size_t n);

/* ft_memchr se utiliza para buscar la primera aparicion de un
 * byte especifico en un bloque de memoria
 *
 * si se encuentra el byte, devuelve un puntero a la posicion del
 * byte en el bloque, de lo contrario devuelve NULL.
 *
 * s -> puntero al bloque de memoria en el que se realizara la busqueda
 * c -> valor del byte que se esta buscando
 * n -> numero de bystes en los que buscar ( total de la cadena ).
 * */
void		*ft_memchr(const void *s, int c, size_t n);

/* ft_memcmp se utiliza para comparar dos bloques de memoria de un tamaño
 * especifico.
 * 
 * El resultado es 0 si los bloques son iguales hasta el numero de bytes
 * especificado ( n ) un valor negativo si el primer bloque es menor, y un valor
 * positivo si el primer bloque es mayor.
 *
 * s1 -> puntero al primer bloque de memoria a comparar.
 * s2 -> puntero al segundo bloque de memoria a comparar.
 * n -> numero de bytes a comparar.
 *
 * */
int			ft_memcmp(const void *s1, const void *s2, size_t n);

/* ft_strnstr se utiliza para buscar una subcadena en una cadena
 * tambien tiene en cuenta un limite maximo de longitud.
 *
 * devuelve un puntero al inicio de la subcadena si se encuentra
 * o null si no se encuentra.
 *
 * s1 -> puntero al primer bloque de memoria a comparar.
 * s2 -> puntero al segundo bloque de memoria a comparar.
 * n -> numero de bytes a comparar.
 *
 * */
char		*ft_strnstr(const char *s1, const char *s2, size_t n);

/* ft_atoi se utiliza para convertir una cadena de caracteres
  * que representa un numero entero en un valor entero de tipo int
  *
  * si la cadena no puede ser convertida devuelve 0.
  *
  * str -> puntero a la cadena de caracteres que representa el numero entero
  *
  * */
int			ft_atoi(const char *str);

/*  Malloc */

/* ft_calloc se utiliza para asignar dinamicamente un bloque de
 * memoria contigua para un numero especificado de elementos, cada uno
 * de un tamaño especificado, e inicializa todos los bits en 0.
 *
 * la funcion devuelve un puntero al bloque de memoria asignado o null 
 * si la asignacion falla.
 *
 * importante liberar la memoria con free cuando ya no se necesite.
 *
 * num_elements -> numero de elementos que se deben asignar.
 * element_size -> tamaño en bytes de cada elemento.
 *
 * */
void		*ft_calloc(size_t num_elements, size_t element_size);

/* ft_strdup se utiliza para duplicar una cadena de caracteres
 * esta funcion asigna dinamicamente memoria para una copia de la
 * cadena dada y luego copia la cadena original en la nueva memoria.
 *
 * importante liberar con free la memoria cuando ya no se necesite.
 *
 * la funcion devuelve un puntero a la nueva cadena duplicada o null
 * si la asignacion de memoria falla.
 *
 * str -> puntero a la cadena de caracteres que se desea duplicar.
 * */
char		*ft_strdup(const char *str);

/* ft_substr devuelve una subcadena con los caracteres de start a len
 *
 * reserva con malloc y devuelve una substring de la string 's'.
 * la substring empieza desde el indice 'start' y tiene una longitud 
 * maxima de 'len'.
 *
 * devuelve la substring resultante o null si falla la reserva de memoria.
 *
 * s -> La string desde la que crear la substring.
 * start -> el indice del caracter en 's' desde el que empezar la substring.
 * len -> la longitud maxima de la substring.
 *
 * */
char		*ft_substr(char const *s, unsigned int start, size_t len);

/* ft_strjoin reserva con malloc y devuelve una nueva string, formada 
 * por la cocatenacion de 's1' y 's2'.
 *
 * devuelve la nueva string o null si falla la reserva de memoria.
 *
 * s1 -> la primera string.
 * s2 -> la string a añadir a 's1'.
 *
 */
char		*ft_strjoin(char const *s1, char const *s2);

/* ft_strtrim elimina todos los caracteres de la string 'set'
 * desde el principio y desde el final de 's1', hasta encontrar un caracter
 * no perteneciente a 'set'.La string resultante se devuelve con una
 * reserva de malloc.
 *
 *devuelve la string recortada o null si falla la reserva de memoria.
 *
 * s1 -> La string que debe ser recortada.
 * set -> los caracteres a eliminar de la string.
 *
 */
char		*ft_strtrim(char const *s1, char const *set);

/* ft_split reserva con malloc un array de strings resultante de
 * separar la string 's' en substrings utilizando el caracter 'c'
 * como delimitador.El array debe terminar con un puntero null.
 *
 * devuelve el array de nuevas strings reultante de la separacion
 * o null si falla la reserva de memoria.
 *
 * s -> la string a separar.
 * c -> el caracter delimitador.
 *
 */
//char		**ft_split(char const *s, char c);

/* ft_itoa Utilizando malloc genera una string que represente el valor
 * entero recibido como argumento.
 * los numeros negativos tienen que gestionarse.
 *
 * devuelve la string que represente el numero o null si la reserva de
 * memoria falla.
 *
 * n -> el entero a convertir.
 *
 */
char		*ft_itoa(int n);

/* ft_strmapi Utilizando malloc a cada caracter de la string 's'
 * aplica la funcion 'f' dando como parametros el indice de cada
 * caracter dentro de 's' y el propio caracter. genera una nueva
 * string con el resultado del uso sucesivo de 'f'.
 *
 * devuelve la string creada tras el correcto uso de 'f' sobre
 * cada caracter. devuelve null si falla la reserva de memoria.
 *
 * s -> la string que iterar.
 * f -> la funcion a aplicar sobre cada caracter.
 *
 */
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char ));

/* ft_striteri a cada caracter de la string 's' aplica la funcion
 * 'f' dando como parametros el indice de cada caracter dentro de 's'
 * y la direccion del propio caracter, que podra modificarse si es necesario.
 * 
 * no devuelve nada
 *
 * s -> la string que iterar.
 * f -> la funcion a aplicar sobre cada caracter.
 *
 */
void		ft_striteri(char *s, void (*f)(unsigned int, char*));

/* ft_putchar_fd envia el caracter 'c' al file descriptor especificado.
 * (write) 
 *
 * no devuelve nada.
 * c -> el caracter a enviar.
 * fd -> el file descriptor sobre el que escribir.
 *
 */
void		ft_putchar_fd(char c, int fd);

/* ft_putstr_fd envia la string 's' al file descriptor especificado.
 * 
 * no devuelve nada.
 *
 * s -> la string a enviar
 * fd -> el file descriptor sobre el que escribir.
 *
 */
void		ft_putstr_fd(char *s, int fd);

/* ft_putendl_fd envia la string 's' al file descriptor dado, seguido
 * seguido de un salto de linea.
 * s -> la string a enviar.
 * fd -> el file descriptor sobre el que escribir.
 *
 */
void		ft_putendl_fd(char *s, int fd);

/* ft_putnbr_fd envia el numero 'n' al file descriptor dado
 * pasar el numero a char.
 *
 * n -> el numero que enviar
 * fd -> el file descriptor sobre el que escribir.
 * 
 */
void		ft_putnbr_fd(int n, int fd);

#endif
