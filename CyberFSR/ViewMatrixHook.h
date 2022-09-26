#pragma once
#include "Config.h"

class ViewMatrixHook
{
public:
	virtual float GetFov() = 0;
	virtual float GetFarPlane() = 0;
	virtual float GetNearPlane() = 0;

	class Configured;

	static std::unique_ptr<ViewMatrixHook> Create(const Config& config);
};

class ViewMatrixHook::Configured : public ViewMatrixHook
{
public:
	Configured(float fov, float nearPlane, float farPlane);

	float GetFov();
	float GetFarPlane();
	float GetNearPlane();

private:
	float Fov;
	float FarPlane;
	float NearPlane;
};

