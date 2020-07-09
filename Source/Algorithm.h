#pragma once

template <typename T>
class Algorithm
{
public:
    virtual ~Algorithm(){};
    virtual void RunAlgorithm() = 0;
};