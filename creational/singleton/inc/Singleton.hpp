
template <typename DataType>
class Singleton {
    public:
        Singleton(const Singleton&) = delete;
        void operator=(Singleton const&) = delete;
        static Singleton& getInstance(DataType data);
        DataType getData();
    private:
        DataType data_;
        Singleton();
        Singleton(DataType);       
};
