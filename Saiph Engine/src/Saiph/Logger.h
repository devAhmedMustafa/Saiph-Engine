#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace Saiph {

	class SAIPH_API Logger
	{
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }


	};

}

// Core log macros
#define SP_CORE_TRACE(...) ::Saiph::Logger::GetCoreLogger()->trace(__VA_ARGS__);
#define SP_CORE_INFO(...)  ::Saiph::Logger::GetCoreLogger()->info(__VA_ARGS__);
#define SP_CORE_WARN(...)  ::Saiph::Logger::GetCoreLogger()->warn(__VA_ARGS__);
#define SP_CORE_ERROR(...) ::Saiph::Logger::GetCoreLogger()->error(__VA_ARGS__);
#define SP_CORE_FATAL(...) ::Saiph::Logger::GetCoreLogger()->fatal(__VA_ARGS__);

// Client log macros
#define SP_CORE_TRACE(...) ::Saiph::Logger::GetClientLogger()->trace(__VA_ARGS__);
#define SP_CORE_INFO(...)  ::Saiph::Logger::GetClientLogger()->info(__VA_ARGS__);
#define SP_CORE_WARN(...)  ::Saiph::Logger::GetClientLogger()->warn(__VA_ARGS__);
#define SP_CORE_ERROR(...) ::Saiph::Logger::GetClientLogger()->error(__VA_ARGS__);
#define SP_CORE_FATAL(...) ::Saiph::Logger::GetClientLogger()->fatal(__VA_ARGS__);
