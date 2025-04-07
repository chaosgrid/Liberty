#include "Deformable2-PCH.h"

PROC_DECLARE(0x65f1720, internal_65f1720, public_65f1720);
extern "C" NAKED register_t __cdecl internal_65f1720()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xC
        ret 8
        UNREACHABLE_TRAP(0x65f1720)
    }
}
