#include "FreeLancer-PCH.h"

PROC_DECLARE(0x556a80, internal_556a80, public_556a80);
extern "C" NAKED register_t __cdecl internal_556a80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0x80
        ret 4
        UNREACHABLE_TRAP(0x556a80)
    }
}
