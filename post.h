#ifndef POST_H
#define POST_H

#include "content.h"

class post:public content
{
public:
    post();
    void SETimage_path();
    void SETcaption();
    void SETcategory();
};

#endif // POST_H
