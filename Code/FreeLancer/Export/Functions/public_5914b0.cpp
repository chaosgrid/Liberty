#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5914b0, internal_5914b0, public_5914b0);
extern "C" NAKED register_t __cdecl internal_5914b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e5328]
        mov dword ptr ds : [public_67d960], eax
        ret 
        UNREACHABLE_TRAP(0x5914b0)
    }
}
