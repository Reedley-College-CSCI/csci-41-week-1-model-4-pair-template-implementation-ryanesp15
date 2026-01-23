// Pair.h
// Ryan Esparza
#ifndef PAIR_H
#define PAIR_H

template <typename T>
class Pair {

private:

   T first;
   T second;

public:

   Pair(T f, T s);
   T getFirst() const;
   T getSecond() const;
   void setFirst(T f);
   void setSecond(T s);
};

template <typename T>
Pair<T>::Pair(T f, T s) {
   first = f;
   second = s;
}

template <typename T>
T Pair<T>::getFirst() const {
   return f;
}

template <typename T>
T Pair<T>::getSecond() const {
   return S;
}

template <typename T>
void Pair<T>::setFirst(T f) {
   fisrt = f;
}

template <typename T>
void Pair<T>::setSecond(T s) {
   second = s;
}

main() {

   Pair<int> pairOne(1, 2);

   Pair<string> pairTwo("apple", "banana");
}

#endif