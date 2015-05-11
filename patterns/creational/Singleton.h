#pragma once

namespace std {
	namespace pattern {
		namespace creational {
			template <typename T>
			class Singleton {
			public:
				static T& instance() {
					static T singleton;

					return singleton;
				}
			private:
				Singleton() = default;
				Singleton(const Singleton& singleton) = delete;
				Singleton operator=(const Singleton& singleton) = delete;
				~Singleton() = default;
			};
		}
	}
}
