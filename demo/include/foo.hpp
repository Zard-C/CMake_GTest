#ifndef  __FOO_HPP__
#define  __FOO_HPP__ 
#include <iostream>

class foo
{
private:  
    int val_; 
public:  
    foo(): val_(0) {}; 
    explicit foo(int val): val_(val) {}; 
    foo(foo&& rhs) 
    {
        std::swap(val_, rhs.val_); 
    }

    foo(const foo &rhs)
    {
        val_ = rhs.val_; 
    }

    foo& operator=(const foo& rhs)
    {
        val_ = rhs.val_;
        return *this; 
    }

    bool operator == (const foo & rhs) const 
    {
        return val_ == rhs.val_; 
    }

    bool operator < (const foo & rhs) const 
    {
        return val_ < rhs.val_; 
    }

    bool operator > (const foo & rhs) const 
    {
        return val_ > rhs.val_; 
    }

    int get() const 
    {
        return val_;
    }
}; 






#endif // ! __FOO_HPP__