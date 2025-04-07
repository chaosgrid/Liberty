#include "Server-PCH.h"

PROC_DECLARE(0x6d11590, internal_6d11590, public_6d11590);
extern "C" NAKED register_t __cdecl internal_6d11590()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d68318]
        mov dword ptr ds : [public_6d8da6c], eax
        ret 
        UNREACHABLE_TRAP(0x6d11590)
    }
}
