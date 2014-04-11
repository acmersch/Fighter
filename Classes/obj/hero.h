//
//  hero.h
//  Card
//
//  Created by cyj on 3/9/14.
//
//

#ifndef __Card__hero__
#define __Card__hero__

#include "lifeObj.h"

class ObjHero : public lifeObj
{
    ObjHero(){
        dir = EDIR_FORWARD;
    }
    ~ObjHero(){}
public:
    static float speed;
    static ObjHero* create(Node* target, Point pos);
    
    virtual void actionStand();
    
    virtual void actionWalk(Node* target, Point destination);
    
    virtual void hurt(){
        lifeObj::hurt(-15);
    };
    
    virtual Rect getShadowRect();
    
    virtual void die(){
        lifeObj::die(-1);
    };

    
    void actionAttack();
};

#endif /* defined(__Card__hero__) */
