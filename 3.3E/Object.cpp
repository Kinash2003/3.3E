//Object.cpp
#include "Object.h"

unsigned int Object::count = 0;
Object::Object() { count++; }
unsigned int Object::Count() { return count; }
//Object реалізує лічильник кількості створених об’єктів