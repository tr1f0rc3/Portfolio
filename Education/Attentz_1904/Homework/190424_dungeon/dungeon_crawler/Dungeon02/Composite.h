#pragma once
template <typename T>
struct Composite {
	virtual ~Composite() {}
	std::vector<T*> composite;
	void add(T* _toAdd) { composite.push_back(_toAdd); }
	void clear() { composite.clear(); }
};