#include "Common-PCH.h"

PROC_DECLARE(0x631d5f0, internal_631d5f0, public_631d5f0);
extern "C" NAKED register_t __cdecl internal_631d5f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a3bf0]
        mov dword ptr ds : [public_6401808], eax
        ret 
        UNREACHABLE_TRAP(0x631d5f0)
    }
}
