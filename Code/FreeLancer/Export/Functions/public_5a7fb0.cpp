#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5a7fb0, internal_5a7fb0, public_5a7fb0);
extern "C" NAKED register_t __cdecl internal_5a7fb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e6448]
        mov dword ptr ds : [public_67ea34], eax
        ret 
        UNREACHABLE_TRAP(0x5a7fb0)
    }
}
