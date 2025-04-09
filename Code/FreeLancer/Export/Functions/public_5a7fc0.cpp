#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5a7fc0, internal_5a7fc0, public_5a7fc0);
extern "C" NAKED register_t __cdecl internal_5a7fc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e644c]
        mov dword ptr ds : [public_67ea30], eax
        ret 
        UNREACHABLE_TRAP(0x5a7fc0)
    }
}
