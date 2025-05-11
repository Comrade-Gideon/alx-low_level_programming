/**
 * _isalpha - checks for alphabetic character lowercase or uppercase.
 * @c: Input for checking lowercase character.
 *
 * Return: 1 if alphabet, otherwise return 0.
 */

int _isalpha(int c)
{
	unsigned char a = 'A';
	unsigned char b = 'a';

	if ((c >= a && c <= 'Z') || (c >= b && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
