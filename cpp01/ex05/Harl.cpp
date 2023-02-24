#include "Harl.hpp"

void Harl::complain( std::string level ){
    this->_level = level;
    switch (_level[0])
    {
    case 'd':
        this->debug();
    case 'i':
        this->info();
    case 'w':
        this->warning();
        break;
    case 'e':
        this->error();
        break;
        
    default:
        std::cout << "wrong arg" << std::endl;
        break;
    }
}
void Harl::debug(void){
       std::cout<< (this->_level.compare("debug") ? "wrong" : "7XL-çift peynirli-üçlü turşu-özel-ketçaplı burgerime fazladan domuz pastırması yemeyi seviyorum. Gerçekten seviyorum!") << std::endl;
}
void Harl::info(void){
    std::cout<< (this->_level.compare("info") ? "wrong" : "Ekstra domuz pastırması eklemenin daha fazla paraya mal olduğuna inanamıyorum. Burgerime yeterince pastırma koymadınız! Yapsaydınız, daha fazlasını istemezdim!") << std::endl;
}
void Harl::warning(void){
    std::cout<< (this->_level.compare("warning") ? "wrong" : "Bence bedavaya fazladan pastırma yemeyi hak ediyorum. Ben yıllardır geliyorum, sen geçen aydan beri burada çalışmaya başladın.") << std::endl;
}
void Harl::error(void){
    std::cout<< (this->_level.compare("error") ? "wrong" :  "Bu kabul edilemez! Şimdi müdürle konuşmak istiyorum.") << std::endl;
}