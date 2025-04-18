#include <FLHook_st6.h>
#define OBJECT_DATA_SIZE 2048

typedef unsigned int uint;
typedef unsigned short ushort;
typedef unsigned char uchar;
typedef long long int64;
typedef char byte;

namespace FLHookCore
{
	template <int size>
	struct TString
	{
		int len;
		char data[size + 1];

		TString() : len(0) { data[0] = 0; }
	};

	struct Vector
	{
			float x = 0.0f;
			float y = 0.0f;
			float z = 0.0f;
	};

	union Matrix {
			struct
			{
					Vector a;
					Vector b;
					Vector c;
			};
			float data[3][3]{};

			Matrix()
			{
				a = { 1.0f, 0.0f, 0.0f };
				b = { 0.0f, 1.0f, 0.0f };
				c = { 0.0f, 0.0f, 1.0f };
			}

			const float (&operator[](const size_t i) const)[3] { return data[i]; }

			[[nodiscard]]
			Vector ToEuler(const bool inDegrees) const
			{
				float heading = 0.0f;
				float bank = 0.0f;
				float attitude = 0.0f;

				const float mathDunno = sqrtf(data[0][0] * data[0][0] + data[1][0] * data[1][0]);

				// singularity at south or north pole
				if (data[0][0] <= 0.0000019f)
				{
					heading = atan2(-data[1][2], data[1][1]);
					bank = atan2(-data[2][0], mathDunno);
					attitude = 0.0f;
				}
				else
				{
					heading = atan2(data[2][1], data[2][2]);
					bank = atan2(-data[2][0], mathDunno);
					attitude = atan2(data[1][0], data[0][0]);
				}

				if (inDegrees)
				{
					constexpr float mod = 57.295776f;
					return { heading * mod, bank * mod, attitude * mod };
				}
				return { heading, bank, attitude };
			}
	};

	struct Quaternion
	{
			float w = 0.0f;
			float x = 0.0f;
			float y = 0.0f;
			float z = 0.0f;
			explicit Quaternion(const Matrix& rotation)
			{
				w = sqrtf(std::max(0.0f, 1 + rotation[0][0] + rotation[1][1] + rotation[2][2])) / 2;
				x = sqrtf(std::max(0.0f, 1 + rotation[0][0] - rotation[1][1] - rotation[2][2])) / 2;
				y = sqrtf(std::max(0.0f, 1 - rotation[0][0] + rotation[1][1] - rotation[2][2])) / 2;
				z = sqrtf(std::max(0.0f, 1 - rotation[0][0] - rotation[1][1] + rotation[2][2])) / 2;
				x = static_cast<float>(_copysign(x, rotation[2][1] - rotation[1][2]));
				y = static_cast<float>(_copysign(y, rotation[0][2] - rotation[2][0]));
				z = static_cast<float>(_copysign(z, rotation[1][0] - rotation[0][1]));
			}
	};

	class Transform
	{
		public:
			Transform() = default;

			Vector pos;
			Matrix orient;
	};

}