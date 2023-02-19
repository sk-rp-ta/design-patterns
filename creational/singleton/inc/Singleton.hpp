template <typename DataType>
class DataCollecion
{
    public:
        DataCollecion(const DataCollecion&) = delete;
        DataCollecion<DataType>& operator=(DataCollecion const&) = delete;
        DataCollecion(DataCollecion&&) noexcept;
        DataCollecion<DataType>& operator=(DataCollecion&&) noexcept;
        static DataCollecion& getInstance(DataType data);
        DataType getData();
    private:
        DataType data_;
        DataCollecion();
        DataCollecion(DataType);
};
