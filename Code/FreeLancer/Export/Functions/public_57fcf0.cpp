#include "FreeLancer-PCH.h"

PROC_DECLARE(0x57fcf0, internal_57fcf0, public_57fcf0);
extern "C" NAKED register_t __cdecl internal_57fcf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e496c]
        mov dword ptr ds : [public_67c4bc], eax
        ret 
        UNREACHABLE_TRAP(0x57fcf0)
    }
}
