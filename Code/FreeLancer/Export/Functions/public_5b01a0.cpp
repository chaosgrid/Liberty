#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b01a0, internal_5b01a0, public_5b01a0);
extern "C" NAKED register_t __cdecl internal_5b01a0()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_67ec84], ax
        mov byte ptr ds : [public_67ec86], al
        ret 
        UNREACHABLE_TRAP(0x5b01a0)
    }
}
