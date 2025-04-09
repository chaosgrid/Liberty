#include "FreeLancer-PCH.h"

PROC_DECLARE(0x599da0, internal_599da0, public_599da0);
extern "C" NAKED register_t __cdecl internal_599da0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67dbad]
        and eax, 0xFFE0C387
        or eax, 0xE0C387
        mov byte ptr ds : [public_67dbac], 8
        mov dword ptr ds : [public_67dbad], eax
        ret 
        UNREACHABLE_TRAP(0x599da0)
    }
}
