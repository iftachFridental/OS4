//
// Created by Ortal Regev and Iftach Fridental on 15/01/2018.
//

#include "News.h"

using namespace std;

    News::News(NewsType type, int prod_id, int prod_type_id) {
        this->prod_id = prod_id;
        this->type = type;
        this->prod_type_id = prod_type_id;
    }


string News::toString() const {
        string type_name = "";
        switch (type) {
            case sports:
                type_name = "SPORTS";
                break;
            case weather:
                type_name = "WEATHER";
                break;
            case regularNews:
                type_name = "NEWS";
                break;
            default:
                break;
        }
    string s = "Producer " + to_string(prod_id) + " " + type_name + " " + to_string(prod_type_id);
        return s;
    }
