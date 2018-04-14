#pragma once
class node
{
private:
        double output;
        double gradientdelta;
        double error;
public:
        node();
        ~node();
        
        double get_Output() { return output; } // returns the output
        void set_Output(double a) { output = a; } // sets the output
        double get_Error() { return error; } // returns the error
        void set_Error(double a) { error = a; } // sets the error
        double get_Gradientdelta() { return gradientdelta; } // returns the gradientdelta
        void set_Gradientdelta(double a) { gradientdelta = a; } // sets the gradientdelta
        
        void update_Gradientdelta(); // updates the gradientdelta according to the error
        
        void activate(); // runs the output through an activation function
        double derivativeAO(); // returns the activation function derivative of the output
};