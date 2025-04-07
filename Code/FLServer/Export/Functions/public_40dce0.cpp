#include "FLServer-PCH.h"

PROC_DECLARE(0x40dce0, internal_40dce0, public_40dce0);
extern "C" NAKED register_t __cdecl internal_40dce0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41b774]
        ret 
        UNREACHABLE_TRAP(0x40dce0)
    }
}
