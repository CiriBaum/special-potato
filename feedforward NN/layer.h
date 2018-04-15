#pragma once
#include <vector>
#include "node.h"
#include "synapse.h"

using namespace std;

class layer
{
private:
        vector<node*> nodes;
        vector<synapse*> synapses;
public:
        layer();
        ~layer();
        layer(int nodecount);
        void connectLayer(layer* upperLayer);
        
        void set_Output(size_t outputnumber, double value) { nodes[ouputnumber]->set_Output(value); }
        double get_Output(size_t outputnumber) { return nodes[outputnumber]->get_Output(); }
        
        void set_Error(size_t outputnumber, double value) { nodes[ouputnumber]->set_Error(value); }
        double get_Error(size_t outputnumber) { return nodes[outputnumber]->get_Error(); }
        
        size_t size() { return nodes.size(); } // returns the outputcount of the layer
        
        void calculate(); // calculates the output of the layer
        void correct(double l_learningrate, double l_momentum); // corrects the weights and then sends the error up to the next layer
        void update_Weights(); // updates the weights in the layer
};