//=================================================================================================
//Function Pointer
//=================================================================================================

int add(int a, int b)
{
	return a + b;
}

int FunctionCallBak(int x, int y, int (*functionCall)(int, int))
{
	int g;
	g = (*functionCall)(x,y);
	return g;

}


int main()
{
	int ans = 0;

	ans = FunctionCallBak(5, 5, (add));

	PRINT_LINE << ans << END_LINE;

	return 0;
}

