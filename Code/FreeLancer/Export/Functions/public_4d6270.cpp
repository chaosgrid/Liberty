#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4d6270, internal_4d6270, public_4d6270);
extern "C" NAKED register_t __cdecl internal_4d6270()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d7ffc]
        mov dword ptr ds : [public_674a08], eax
        ret 
        UNREACHABLE_TRAP(0x4d6270)
    }
}
