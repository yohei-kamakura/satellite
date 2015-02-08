//
//  TopScene.h
//  Satellite
//
//  Created by 鎌倉 洋平 on 2015/02/08.
//
//

#ifndef __Satellite__TopScene__
#define __Satellite__TopScene__

#include <stdio.h>

class TopScene: public cocos2d::Layer
{
protected:
	TopScene();
	virtual ~TopScene();
	bool init() override;

public:
	static cocos2d::Scene* createScene();
	CREATE_FUNC(TopScene);
};

#endif /* defined(__Satellite__TopScene__) */
