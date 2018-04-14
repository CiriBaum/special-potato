#include "node.h"
#include <cmath>

node::node()
{
        set_Output(0);
        set_Gradientdelta(0);
        set_Error(0);
}

node::~node()
{
}

void node::update_Gradientdelta()
{
        gradientdelta = error * derivativeAO();
}

void node::acitvate()
{
        set_Output(1 / (1 + exp(-get_Output()))); // sigmoid avtivation function
}

double node::derivativeAO()
{
        return get_Output() * (1 - get_Output());
}