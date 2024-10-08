#include "gate.hpp"

Gate::Gate(vector<int> _inputs, int _output): Gate()
{
    if (_inputs.size() < 2) {
        throw BadInputException("incompatible inputs");
        return;
    } 

    for (size_t i = 0; i < _inputs.size(); i++) {
        this->inputs.push_back(new Wire(_inputs[i]));
    }
    this->output = new Wire(_output);
}

Gate::~Gate()
{
}

vector<Wire*> Gate::getInputs()
{
    return this->inputs;
}

Wire* Gate::getOutput()
{
    return this->output;
}
