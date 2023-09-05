#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/string.hpp>
using namespace godot;

class MyNode2D : public Node2D
{
    GDCLASS(MyNode2D, Node2D)
public:
    MyNode2D() {};
    ~MyNode2D() {};
    void Print();
protected:
    static void _bind_methods();
};