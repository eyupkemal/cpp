#include "Data.hpp"

uintptr_t Serializer::serialize(Data* data)
{
    return reinterpret_cast<uintptr_t>(data);
    //veriye dönüşmesini sagladık yani (Bu dönüşüm, 
    //Data türünde veriyi seri hale getirmek ve sonra bir yerden diğerine taşımak gibi amaçlarla kullanılabilir.
    // Bu nedenle, dönüştürülen sayı, Data nesnesinin bellek adresini temsil eder.)
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
    //uniptr_t türünden data türüne çevirdik;

}