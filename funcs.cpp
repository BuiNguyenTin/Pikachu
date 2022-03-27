#include <main.h>
#include <funcs.h>

StructofTable STable;
StructofRec **SRec;

void Create2DArray()
{
    SRec = new StructofRec*[STable.Row];
    for (int i = 0; i < STable.Row; i++)
    {
        SRec[i] = new StructofRec[STable.Col];
    }
    
}

void delete2DArray()
{
    for (int i = 0; i < STable.Row; i++)
    {
        delete[] SRec[i];
    }
    delete[] SRec;
}