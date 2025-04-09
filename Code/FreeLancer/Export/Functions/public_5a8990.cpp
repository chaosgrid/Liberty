#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5a8990, internal_5a8990, public_5a8990);
extern "C" NAKED register_t __cdecl internal_5a8990()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e64b4]
        mov dword ptr ds : [public_67ea44], eax
        ret 
        UNREACHABLE_TRAP(0x5a8990)
    }
}
