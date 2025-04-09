#include "FreeLancer-PCH.h"

PROC_DECLARE(0x58c360, internal_58c360, public_58c360);
extern "C" NAKED register_t __cdecl internal_58c360()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e50f0]
        mov dword ptr ds : [public_67d950], eax
        ret 
        UNREACHABLE_TRAP(0x58c360)
    }
}
