#include "Server-PCH.h"

PROC_DECLARE(0x6d069e0, internal_6d069e0, public_6d069e0);
extern "C" NAKED register_t __cdecl internal_6d069e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d67cac]
        mov dword ptr ds : [public_6d8d9c0], eax
        ret 
        UNREACHABLE_TRAP(0x6d069e0)
    }
}
