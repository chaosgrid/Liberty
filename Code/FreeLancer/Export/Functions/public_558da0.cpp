#include "FreeLancer-PCH.h"

PROC_DECLARE(0x558da0, internal_558da0, public_558da0);
extern "C" NAKED register_t __cdecl internal_558da0()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_6799fc], eax
        mov dword ptr ds : [public_679a00], eax
        ret 
        UNREACHABLE_TRAP(0x558da0)
    }
}
