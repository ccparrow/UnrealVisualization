// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HAL/Runnable.h"

class VISUALIZATION_API V_Runnable : public FRunnable
{
public:
	V_Runnable();
	~V_Runnable();

	//ͨ��UV_CPPLibrary::CallFuntionByNameʵ�ָ�д
	uint32 Run();

	AActor* ActorRef;
	FString FunctionNameRef;

	//���乹�캯�����ڸ�ֵ
	V_Runnable(AActor* Actor, FString FunctionName);

};
