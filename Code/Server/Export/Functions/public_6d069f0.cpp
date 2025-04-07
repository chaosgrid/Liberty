#include "Server-PCH.h"

PROC_DECLARE(0x6d069f0, internal_6d069f0, public_6d069f0);
extern "C" NAKED register_t __cdecl internal_6d069f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d67cb0]
        mov dword ptr ds : [public_6d8d9bc], eax
        ret 
        UNREACHABLE_TRAP(0x6d069f0)
    }
}
