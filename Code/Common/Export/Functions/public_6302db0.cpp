#include "Common-PCH.h"

PROC_DECLARE(0x6302db0, internal_6302db0, public_6302db0);
extern "C" NAKED register_t __cdecl internal_6302db0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a2680]
        mov dword ptr ds : [public_63fcdfc], eax
        ret 
        UNREACHABLE_TRAP(0x6302db0)
    }
}
