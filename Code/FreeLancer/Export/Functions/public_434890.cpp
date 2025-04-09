#include "FreeLancer-PCH.h"

PROC_DECLARE(0x434890, internal_434890, public_434890);
extern "C" NAKED register_t __cdecl internal_434890()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cad9c]
        mov dword ptr ds : [public_668658], eax
        ret 
        UNREACHABLE_TRAP(0x434890)
    }
}
