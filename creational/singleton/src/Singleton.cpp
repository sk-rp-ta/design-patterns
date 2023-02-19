#include "Singleton.hpp"

#include <utility>

template <typename DataType>
DataCollecion<DataType>::DataCollecion(DataType data)
: data_(data) {}

template <typename DataType>
DataCollecion<DataType>::DataCollecion(DataCollecion&& DataCollecion) noexcept
: data_(std::move(DataCollecion.data_)) {}

template <typename DataType>
DataCollecion<DataType>& DataCollecion<DataType>::operator=(DataCollecion&& DataCollecion) noexcept
{
    this->data_ = std::move(DataCollecion.data_);

    return *this;
}

template <typename DataType>
DataCollecion<DataType>& DataCollecion<DataType>::getInstance(DataType data)
{
    static DataCollecion<DataType> instance(data);

    return instance;
}

template <typename DataType>
DataType DataCollecion<DataType>::getData()
{
    return data_;
}

template class DataCollecion<int>;
