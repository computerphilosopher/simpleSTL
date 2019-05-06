template <typename T1, typename T2>
class Pair {
public:
	T1 first;
	T2 second;

	Pair() {
		first = T1();
		second = T2();
	}

	Pair(const T1 &first_, const T2 &second_) :first(first_), second(second_) {
	}

	Pair& operator =(const Pair<T1, T2>& other) {
		first = other.first;
		second = other.second;

		return *this;
	}

	bool operator > (const Pair <T1, T2> other) {
		if (first > other.first) {
			return true;
		}
		return second > other.second;
	}

	bool operator >= (const Pair <T1, T2> other) {
		if (first >= other.first) {
			return true;
		}
		return second >= other.second;
	}

	bool operator < (const Pair <T1, T2> other) {
		if (first < other.first) {
			return true;
		}
		return second < other.second;
	}
	bool operator <= (const Pair <T1, T2> other) {
		if (first < other.first) {
			return true;
		}
		return second < other.second;
	}

	bool operator == (const Pair <T1, T2> other) {
		return first == other.first and second == other.second;
	}
};

template <typename T1, typename T2>
Pair<T1, T2> make_Pair(const T1 &first, const T2 &second) {
	return Pair<T1, T2>(first, second);
}