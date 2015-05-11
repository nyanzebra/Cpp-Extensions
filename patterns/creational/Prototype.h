#pragma once

#include <memory>

namespace std {
	namespace pattern {
		namespace creational {
			class Prototype {
			protected:
				Prototype() = default;
				virtual ~Prototype() = default;

			public:
				Prototype(Prototype& prototype) = delete;

				virtual Prototype* clone() = 0;
				virtual void method() = 0;
			};
		}
	}
}