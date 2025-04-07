#include "Server-PCH.h"

PROC_DECLARE(0x6ced280, internal_6ced280, public_6ced280);
extern "C" NAKED register_t __cdecl internal_6ced280()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d65734]
        mov dword ptr ds : [public_6d8d6ec], eax
        ret 
        UNREACHABLE_TRAP(0x6ced280)
    }
}
