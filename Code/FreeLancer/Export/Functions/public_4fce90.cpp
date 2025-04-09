#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4fce90, internal_4fce90, public_4fce90);
extern "C" NAKED register_t __cdecl internal_4fce90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d9e1c]
        mov dword ptr ds : [public_674f6c], eax
        ret 
        UNREACHABLE_TRAP(0x4fce90)
    }
}
