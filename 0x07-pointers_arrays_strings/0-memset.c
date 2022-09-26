/**

 * _memset - a function that fills

 *         memory with a constant byte

 *

 * @w: input pointer to char type

 *    represents the pointer to the

 *    block of memory to fill

 * @g: input variable of char type

 *    represents the character to

 *    fill s

 * @h: unsigned int variable

 *    the number of bytes to be filled

 *

 * Return: A pointer to the filled memory

 *         area @w

*/



char *_memset(char *w, char g, unsigned int h)

{

	/**

	 * since we are storing a value that will always be greater than 0 

         * we just declared an unsigned int
	 
	 */
	

	unsigned int z;



	for (z = 0; z < h; z++)

		w[z] = g;

 

	return (w);

}
