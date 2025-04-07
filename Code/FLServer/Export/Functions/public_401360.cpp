#include "FLServer-PCH.h"

PROC_DECLARE(0x401360, internal_401360, public_401360);
extern "C" NAKED register_t __cdecl internal_401360()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41c064]
        mov dword ptr ds : [public_425f24], eax
        ret 
        UNREACHABLE_TRAP(0x401360)
    }
}
