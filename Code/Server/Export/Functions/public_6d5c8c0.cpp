#include "Server-PCH.h"

PROC_DECLARE(0x6d5c8c0, internal_6d5c8c0, public_6d5c8c0);
extern "C" NAKED register_t __cdecl internal_6d5c8c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6b9c4]
        mov dword ptr ds : [public_6d90454], eax
        ret 
        UNREACHABLE_TRAP(0x6d5c8c0)
    }
}
