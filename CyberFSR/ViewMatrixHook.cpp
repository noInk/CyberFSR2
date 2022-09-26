#include "pch.h"
#include "ViewMatrixHook.h"

std::unique_ptr<ViewMatrixHook> ViewMatrixHook::Create(const Config& config)
{
	switch (config.Method.value_or(ViewMethod::Config))
	{
		case ViewMethod::Config:
		default:
			return std::make_unique<ViewMatrixHook::Configured>(
				config.VerticalFOV.value_or(60.0f),
				config.FarPlane.value_or(std::numeric_limits<float>::infinity()),
				config.NearPlane.value_or(0.0f)
			);
	}
}

#pragma region Configured

ViewMatrixHook::Configured::Configured(float fov, float nearPlane, float farPlane)
	: Fov(fov)
	, NearPlane(nearPlane)
	, FarPlane(farPlane)
{
}

float ViewMatrixHook::Configured::GetFov()
{
	return Fov;
}

float ViewMatrixHook::Configured::GetFarPlane()
{
	return FarPlane;
}

float ViewMatrixHook::Configured::GetNearPlane()
{
	return NearPlane;
}

#pragma endregion