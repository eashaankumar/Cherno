#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Cherno
{
	class CHERNO_API Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
// NOTE: Do not run this in distribution builds (bind to empty)
#define CN_CORE_TRACE(...) ::Cherno::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CN_CORE_INFO(...)  ::Cherno::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CN_CORE_WARN(...)  ::Cherno::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CN_CORE_ERROR(...) ::Cherno::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CN_CORE_FATAL(...) ::Cherno::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Core log macros
#define CN_TRACE(...)      ::Cherno::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CN_INFO(...)       ::Cherno::Log::GetClientLogger()->info(__VA_ARGS__)
#define CN_WARN(...)       ::Cherno::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CN_ERROR(...)      ::Cherno::Log::GetClientLogger()->error(__VA_ARGS__)
#define CN_FATAL(...)      ::Cherno::Log::GetClientLogger()->fatal(__VA_ARGS__)