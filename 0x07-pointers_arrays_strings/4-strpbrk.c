/**
 * strpbrk - searches a string for any of a set of characters
 * @s: input string to search within
 * @accept: set of characters to search for in the input string
 * Return: pointer to the first occurrence of a character from 'accept' in 's',
 *         or NULL if no characters from 'accept' are found in 's'
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
			return (&s[i]);
			}
		}
	}
	return ('\0');
}
