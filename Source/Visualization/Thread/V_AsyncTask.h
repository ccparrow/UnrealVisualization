// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Async/AsyncWork.h"

class VISUALIZATION_API V_AsyncTask : public FNonAbandonableTask
{
public:
	V_AsyncTask();
	~V_AsyncTask();

	//����������ɱ�ע�����̵߳���Ϣ
	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(PrimeCalculationAsyncTask, STATGROUP_ThreadPoolAsyncTasks);
	}

	//ͨ��UV_CPPLibrary::CallFuntionByNameʵ�ָ�д
	void DoWork();

	AActor* ActorRef;
	FString FunctionNameRef;

	//���乹�캯�����ڸ�ֵ
	V_AsyncTask(AActor* Actor, FString FunctionName);

};
