void swap(char* str, int i, int j)
{
	char temp = str[i];
	str[i] = str[j];
	str[j] = temp;
}

void permute(char *string, int start, int end)
{
	if(start == end)
	{
		printf("%s\n", string);
		return;
	}

	permute(string, start + 1, end);
	int i;
	for(i = start + 1; i < end; i++)
	{
		if(string[start] == string[i])
			continue;
		swap(string, start, i);
		permute(string, start + 1, end);
		swap(string, start, i);
	}
}
