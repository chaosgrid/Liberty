#include "Server-PCH.h"

PROC_DECLARE(0x6d18920, internal_6d18920, public_6d18920);
extern "C" NAKED register_t __cdecl internal_6d18920()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d68674]
        mov dword ptr ds : [public_6d8f5f4], eax
        ret 
        UNREACHABLE_TRAP(0x6d18920)
    }
}
