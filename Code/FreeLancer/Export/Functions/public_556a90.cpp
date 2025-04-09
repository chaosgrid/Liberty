#include "FreeLancer-PCH.h"

PROC_DECLARE(0x556a90, internal_556a90, public_556a90);
extern "C" NAKED register_t __cdecl internal_556a90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0x5C
        ret 4
        UNREACHABLE_TRAP(0x556a90)
    }
}
