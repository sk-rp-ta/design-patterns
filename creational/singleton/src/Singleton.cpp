#include "Singleton.hpp"

#include <utility>

template <typename DataType>
Singleton<DataType>::Singleton(DataType data)
: data_(data) {}

template <typename DataType>
Singleton<DataType>::Singleton(Singleton&& singleton) noexcept
: data_(std::move(singleton.data_)) {}

template <typename DataType>
Singleton<DataType>& Singleton<DataType>::operator=(Singleton&& singleton) noexcept
{
    this->data_ = std::move(singleton.data_);

    return *this;
}

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
