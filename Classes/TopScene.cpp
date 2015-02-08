//
//  TopScene.cpp
//  Satellite
//
//  Created by 鎌倉 洋平 on 2015/02/08.
//
//

#include "TopScene.h"

USING_NS_CC;

TopScene::TopScene()
{
	
}

TopScene::~TopScene()
{
	
}

Scene* TopScene::createScene()
{
	Scene* scene = Scene::create();
	Layer* layer = TopScene::create();
	scene->addChild(layer);
	return scene;
}

bool TopScene::init()
{
	if (!Layer::init()) {
		return false;
	}

	return true;
}