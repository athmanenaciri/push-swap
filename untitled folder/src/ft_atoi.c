
int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
int ft_atoi(char *str, int *nbr)
{
	int i;
	int sign;
	int res;
	
	i = 0;
	sign = -1;
	if(str[i])
	{
		if((str[i] == '-' || str[i] == '+') && ft_strlen(str) == 1)
			return(1);
		if(str[i] == '-' || str[i] == '+')
		{
			if(str[i] == '-')
				sign *= -1;
			i++;
		}
		while(str[i])
		{
			if(str[i] < '0' || str[i] > '9')
				return(1);
			i++;
		}	
	}
	res = 0;
	i = 0;
	if(str[i] == '-' || str[i] == '+')
		i = 1;
	else
		i = 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res -= str[i] - '0';
		i++;
	}
	*nbr = sign * res;

	return(0);
}
