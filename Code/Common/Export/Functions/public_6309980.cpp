#include "Common-PCH.h"

PROC_DECLARE(0x6309980, internal_6309980, public_6309980);
extern "C" NAKED register_t __cdecl internal_6309980()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 8
        ret 8
        UNREACHABLE_TRAP(0x6309980)
    }
}
