#include "Deformable2-PCH.h"

PROC_DECLARE(0x65f16e0, internal_65f16e0, public_65f16e0);
extern "C" NAKED register_t __cdecl internal_65f16e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0x30
        ret 8
        UNREACHABLE_TRAP(0x65f16e0)
    }
}
