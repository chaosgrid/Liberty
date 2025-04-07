#include "EngBase-PCH.h"

PROC_DECLARE(0x661f3a0, internal_661f3a0, public_661f3a0);
extern "C" NAKED register_t __cdecl internal_661f3a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0x28
        ret 8
        UNREACHABLE_TRAP(0x661f3a0)
    }
}
