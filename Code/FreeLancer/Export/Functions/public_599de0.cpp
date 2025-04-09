#include "FreeLancer-PCH.h"

PROC_DECLARE(0x599de0, internal_599de0, public_599de0);
extern "C" NAKED register_t __cdecl internal_599de0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67db9d]
        and eax, 0xFF52EAF5
        or eax, 0x52EAF5
        mov byte ptr ds : [public_67db9c], 8
        mov dword ptr ds : [public_67db9d], eax
        ret 
        UNREACHABLE_TRAP(0x599de0)
    }
}
