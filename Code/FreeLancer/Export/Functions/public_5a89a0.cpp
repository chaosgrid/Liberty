#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5a89a0, internal_5a89a0, public_5a89a0);
extern "C" NAKED register_t __cdecl internal_5a89a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e64b8]
        mov dword ptr ds : [public_67ea40], eax
        ret 
        UNREACHABLE_TRAP(0x5a89a0)
    }
}
