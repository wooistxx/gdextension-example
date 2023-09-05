#include "MyNode2D.h"
#include <godot_cpp/variant/utility_functions.hpp>
using namespace godot;

void MyNode2D::_bind_methods()
{
    UtilityFunctions::print("_bind_methods");
    ClassDB::bind_method(D_METHOD("Print"), &MyNode2D::Print);
}

void MyNode2D::Print()
{
    UtilityFunctions::print("Print");
}