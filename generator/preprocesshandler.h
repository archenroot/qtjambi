
#ifndef PREPROCESSHANDLER_H_
#define PREPROCESSHANDLER_H_

#include <QString>

#include "rpp/pp-iterator.h"
#include "rpp/pp-engine-bits.h"
#include "rpp/pp-environment.h"

class PreprocessHandler {
    
    public:
        PreprocessHandler(QString sourceFile, QString targetFile);
        
    private:
        rpp::pp_environment env;
        rpp::pp preprocess;
        rpp::pp_null_output_iterator null_out;

        const char *ppconfig;
        
        QStringList setIncludes();
        void writeTargetFile( QString sourceFile, QString targetFile, QString currentDir);

};

#endif