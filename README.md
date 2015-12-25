    bundle
    cp config/database.yml.example config/database.yml
    cd lib
    g++ -fPIC -std=gnu++11 -shared regex_test.cpp -o regex_test.so
    rails c
    RegexTest.scan_name_for_whole_word("spa", '(\\\\Wspa$|^spa\\\\W|\\\\Wspa\\\\W|^spa$|^spa[s])')
    
