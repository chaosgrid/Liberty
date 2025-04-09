#include "FreeLancer-PCH.h"

PROC_DECLARE(0x428ef0, internal_428ef0, public_428ef0);
extern "C" NAKED register_t __cdecl internal_428ef0()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_667a44], 0x30
        mov dword ptr ds : [public_667a48], eax
        mov dword ptr ds : [public_667a4c], 0xFFFFFFFF
        mov dword ptr ds : [public_667a50], eax
        ret 
        UNREACHABLE_TRAP(0x428ef0)
    }
}
