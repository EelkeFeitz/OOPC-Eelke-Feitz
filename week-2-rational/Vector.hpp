#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>
#include <iomanip>

class vector
{
private:
public:
    int x, y;
    vector( int x, int y ):
        x( x ),
        y( y )
    {}
    
    /// \brief
    /// output operator for a rational value.
    /// \details
    /// This operator<< prints a constructor in the format
    /// [rhs.x/rhs.y] where both values are printed as
    /// decimal values.
    friend std::ostream & operator<<( std::ostream & lhs, const vector & rhs ) {
        return lhs
        << "["
        << rhs.x
        << "/"
        << rhs.y
        << "]";
   }
    
    /// \brief
    /// compares two vectors.
    /// \details
    /// This operator tests for equality. It returns true
    /// if and only if the x and y of both
    /// vectors are equal.
    bool operator==( const vector & rhs ) {
        return ( x == rhs.x ) && ( y == rhs.y );
    }
    
    /// \brief
    /// adds up two vector's.
    /// \details
    /// This operator+ adds up two vectors, returns result.
    vector operator+( const vector & rhs ) const {
        vector temp = *this;
        temp += rhs;
        return temp;
    }
    
    /// \brief
    /// adds vector into another vector.
    /// \details
    /// This operator+= adds a vector into another vector.
    vector operator+=( const vector & rhs ) {
        x += rhs.x;
        y += rhs.y;
        return( *this );
    }
    
    /// \brief
    /// multiplies a vector with an int.
    /// \details
    /// This operator* multiplies a vector value with a int variable.
    vector operator*( const int rhs ) {
        vector temp = *this;
        temp *= rhs;
        return temp;
    }
    
    /// \brief
    /// multiplies a int into a vector.
    /// \details
    /// this operator *= multiplies a int into a vector.
    vector operator*=( const int rhs ) {
        x *= rhs;
        y *= rhs;
        return( *this );
    }
};

/// \brief
/// multiplies a int with a vector
/// \details
/// This operator* multiplies a int with a vector, returns a vector.
vector operator*( const int & lhs, const vector & rhs ) {
    vector temp( lhs * rhs.x, lhs * rhs.y );
    return temp;
}

/// \brief
/// implements + operator
/// \details
/// This operator returns given vector
vector operator+(const vector & rhs) {
    return( rhs );
}

#endif // VECTOR_HPP