#include "Common-PCH.h"

PROC_DECLARE(0x6309950, internal_6309950, public_6309950);
extern "C" NAKED register_t __cdecl internal_6309950()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0x2C
        ret 8
        UNREACHABLE_TRAP(0x6309950)
    }
}
