﻿//------------------------------------------------------------------------
// * @filename: GamePlayerActor.h
// *
// * @brief: 玩家扮演的角色
// *
// * @author: XGM
// * @date: 2018/05/18
//------------------------------------------------------------------------
#pragma once

#include <stdint.h>

class GamePlayerActor
{
public:
	virtual ~GamePlayerActor() {}

	//------------------------------------------------------------------------
	// 获得玩家扮演的角色类型
	//------------------------------------------------------------------------
	virtual int32_t GetType() = 0;
};
