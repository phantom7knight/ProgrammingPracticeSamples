

//=================================================================================================
//Functor Example
//=================================================================================================

//class Square 
//{
//public:
//	int operator()(const int& arg) const
//	{
//		return arg * arg;
//	}
//};
//
//class Cube
//{
//public:
//	int operator()(const int& arg) const
//	{
//		return arg * arg * arg;
//	}
//};
//
//template<typename F, typename G>
//class Compose
//{
//public:
//
//	int operator() (const int& arg1, const int& arg2)
//	{
//		F f;
//		G g;
//
//		const int res = g(arg1,arg2);
//		return f(res);
//	}
//};
//
//int main()
//{
//	std::list<int> list_;
//	
//	list_.push_front(1);
//	list_.push_front(2);
//	list_.push_front(3);
//	list_.push_front(4);
//
//	std::vector<int> vector_;
//
//	vector_.push_back(1);
//	vector_.push_back(3);
//	vector_.push_back(5);
//	vector_.push_back(7);
//
//	std::vector<int> result(4);
//
//	std::transform(list_.begin(), list_.end(), vector_.begin(), result.begin(), std::plus<int>());
//	
//
//	for(int i = 0; i < result.size(); ++i)
//	{
//		STDPRINTLINE(result[i]);
//	}
//	
//	
//	STDPRINTLINE("==================");
//
//	std::transform(list_.begin(), list_.end(), vector_.begin(), result.begin(), Compose< Square, std::plus<int> >() );
//
//	for (int i = 0; i < result.size(); ++i)
//	{
//		STDPRINTLINE(result[i]);
//	}
//
//	
//	STDPRINTLINE("==================");
//
//	std::transform(list_.begin(), list_.end(), vector_.begin(), result.begin(), Compose< Cube, std::plus<int> >());
//
//	for (int i = 0; i < result.size(); ++i)
//	{
//		STDPRINTLINE(result[i]);
//	}
//
//
//	return 0;
//}


