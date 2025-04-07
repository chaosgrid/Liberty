#include "Server-PCH.h"

PROC_DECLARE(0x6d18900, internal_6d18900, public_6d18900);
extern "C" NAKED register_t __cdecl internal_6d18900()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d68670]
        mov dword ptr ds : [public_6d8f5fc], eax
        ret 
        UNREACHABLE_TRAP(0x6d18900)
    }
}
