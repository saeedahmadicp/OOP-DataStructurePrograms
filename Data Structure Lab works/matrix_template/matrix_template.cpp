#include <iostream>
#include  <cmath>
#include <cstdlib>

using namespace std;

template <class Type> //decleration of template variable
class Matrix{
   private:
       Type** matrix;
       size_t column;
       size_t row;
   public:
       //constructor
      Matrix(size_t row, size_t column);
    //destructor
      ~Matrix();

      //copy constructors
      Matrix(const Matrix<Type>& another_matrix);

      //declarations
    void operator = (const Matrix<Type>& another_matrix);
    Matrix<Type> operator + (const Matrix<Type>& another_matrix);
    Matrix<Type> operator - (const Matrix<Type>& another_matrix);
    Matrix<Type> operator * (const Matrix<Type>& another_matrix);
    Matrix<Type> operator * (const int& a);
    //friend functions declarations and definitons
       friend ostream& operator <<  (ostream& os, Matrix<Type>& a){
       for(int i=0; i<a.row; i++){
          for(int j=0; j<a.column; j++){
            os << a.matrix[i][j] << " ";
            }
              os << endl;
            }
          return os;
          }
   friend istream& operator >>  (istream& is, Matrix<Type>& a){
       for(int i=0; i<a.row; i++){
            cout << "Enter "<< a.column << " elements for the " << i +1 << " row: ";
        for(int j=0; j<a.column; j++){
             is >> a.matrix[i][j];
         }}
        return is;
          }

    friend Matrix<Type> operator * (const Matrix<Type>& another_matrix){
         Matrix<Type> a(another_matrix.row, another_matrix.column);
             a.matrix = new Type*[another_matrix.row];
          for(int i=0; i<another_matrix.row; i++)
               a.matrix[i] = new Type[another_matrix.column];
            for(int i=0; i<a.row; i++)
               for(int j=0; j<a.column; j++)
                  a.matrix[i][j] = another_matrix.matrix[i][j] * this;
            return a;  
    }   

};

int main()
{

   size_t row1, column1, row2 , column2;
   cout << "Enter the order for the first matrix(rows columns): ";
   cin >> row1 >> column1;
   cout << "Enter the order for the 2nd matrix(row columns): ";
   cin >> row2 >> column2;
  
   Matrix<int> a(row1, column1), b(row2, column2);
   int option;
   
   cout <<"Enter the option: "<< endl
        << "1. Addition of two matrices"<<endl
        << "2. Subtraction of two matrices"<<endl
        << "3. Multiplication of tow matrices" << endl;
        cin >> option;
       
       cout << "Enter the elements for the First matrix: "<<endl;
       cin >> a;
       cout << "Enter the elements for the 2nd matrix: "<<endl;
       cin >> b;


    if(option == 1){
       Matrix<int> c(row1,column1);
       c = a + b;
       cout << "The resultant matrix after performing addition is: "<< endl;
       cout << c << endl;
      }
    else if(option == 2){
       Matrix<int> c(row1,column1);
       c = a - b;
       cout << "The resultant matrix after performing Subtraction is: "<< endl;
       cout << c << endl;
     }
    else if(option == 3){
       Matrix<int> c(row1,column2);
       c = a * b;
       cout << "The resultant matrix after performing Multiplicaiton is: "<< endl;
       cout << c << endl;
    }
    else cout << "You have entered invalid option!" << endl;


    return 0;
}


     //constructor definitions
      template <class Type>
      Matrix<Type> :: Matrix(size_t row, size_t column){
          this->row = row;
          this->column = column;
       matrix = new Type*[row];
        for(int i=0; i<row; i++)
           matrix[i] = new Type[column];
           for(int i=0; i<row; i++)
              for(int j=0; j<column; j++)
                this->matrix[i][j]=0;
      }

    //destructor definitions
      template <class Type>
      Matrix<Type> :: ~Matrix(){
        for(int i=0; i<row; i++)
              delete [] matrix[i];
             delete [] matrix;
      }

      //copy constructors definition
      template <class Type>
      Matrix<Type> :: Matrix(const Matrix<Type>& another_matrix){
          this->row = another_matrix.row;
          this->column = another_matrix.column;

        this->matrix = new Type*[another_matrix.row];
         for(int i=0; i<this->row; i++)
              this->matrix[i] = new Type[another_matrix.column];

      for(int i=0; i<row; i++)
         for(int j=0; j<column; j++)
            this->matrix[i][j] = another_matrix.matrix[i][j];
       }


      //definition of member functions
      template <class Type>
      Matrix<Type> Matrix<Type> :: operator + (const Matrix<Type>& another_matrix){
          Matrix<Type> a(another_matrix.row, another_matrix.column);

        if(row != another_matrix.row && column != another_matrix.column)
            {
             cout << "The additions is not possible!"<< endl;
             exit(0);
            }

        else
            {
             for(int i=0; i<row; i++)
               for(int j=0; j<column; j++)
                 a.matrix[i][j] = matrix[i][j]+ another_matrix.matrix[i][j];
            }
            return a;
      } 



      template <class Type>
      Matrix<Type> Matrix<Type> :: operator - (const Matrix<Type>& another_matrix){

          Matrix<Type> b(another_matrix.row, another_matrix.column);

          if(row != another_matrix.row && column != another_matrix.column)
            {
             cout << "The subtraction is not possible!"<< endl;
             exit(0);
            }

        else
            {
             for(int i=0; i<row; i++)
               for(int j=0; j<column; j++)
                 b.matrix[i][j] = matrix[i][j] - another_matrix.matrix[i][j];
          }
          return b;
      }

      template <class Type>
      Matrix<Type> Matrix<Type> :: operator * (const Matrix<Type>& another_matrix){

           Matrix<Type> a(row, another_matrix.column);

            if(column != another_matrix.row)
            {
             cout << "The multiplication is not possible!"<< endl;
             exit(0);
            }

        else
         {
          for(int i=0; i<row; i++)
               for(int j=0; j<another_matrix.column; j++)
                  for(int k=0; k<another_matrix.column; k++)
                    a.matrix[i][j]+= matrix[i][k] * another_matrix.matrix[k][j];

         }
        return a;
      }
     
    template <class Type>
    void Matrix<Type> :: operator = (const Matrix<Type>& another_matrix){
    
        this->row = another_matrix.row;
        this->column = another_matrix.column;
        this->matrix = new Type*[this->row];
        for(int i=0; i<this->row; i++)
            this->matrix[i] = new Type[this->column];
        
         for(int i=0; i<this->row; i++)
            for(int j=0; j<this->column; j++)
                this->matrix[i][j] = another_matrix.matrix[i][j];
     
    }

