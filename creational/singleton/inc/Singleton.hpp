template <typename DataType>
class Singleton
{
    public:
        Singleton(const Singleton&) = delete;
        Singleton<DataType>& operator=(Singleton const&) = delete;
        Singleton(Singleton&&) noexcept;
        Singleton<DataType>& operator=(Singleton&&) noexcept;
        static Singleton& getInstance(DataType data);
        DataType getData();
    private:
        DataType data_;
        Singleton();
        Singleton(DataType);
};
