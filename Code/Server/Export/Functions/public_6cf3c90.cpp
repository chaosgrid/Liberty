#include "Server-PCH.h"

PROC_DECLARE(0x6cf3c90, internal_6cf3c90, public_6cf3c90);
extern "C" NAKED register_t __cdecl internal_6cf3c90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d66494]
        mov dword ptr ds : [public_6d8d7b8], eax
        ret 
        UNREACHABLE_TRAP(0x6cf3c90)
    }
}
