#include "Singleton.hpp"

template <typename DataType>
Singleton<DataType>::Singleton(DataType data) : data_(data)
{}

template <typename DataType>
Singleton<DataType>& Singleton<DataType>::getInstance(DataType data) 
{
    static Singleton<DataType> instance(data);

    return instance;
}

template <typename DataType>
DataType Singleton<DataType>::getData() 
{
    return data_;
}

template class Singleton<int>;
