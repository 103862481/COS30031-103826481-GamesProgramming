#include <iostream>
#include "File.h"

int main(int argc, char* argv[])
{
    File* file = new File(8, 7.2, 'H');

    file->ShowValues();
    file->WriteValuesToFile();
    file->GetFileSize();
    file->ReadValuesFromFile();
    file->ReadJSONFile();

    
    return 0;
}
