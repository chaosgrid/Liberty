#include "Server-PCH.h"

PROC_DECLARE(0x6d433f0, internal_6d433f0, public_6d433f0);
extern "C" NAKED register_t __cdecl internal_6d433f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6ac5c]
        mov dword ptr ds : [public_6d8f75c], eax
        ret 
        UNREACHABLE_TRAP(0x6d433f0)
    }
}
