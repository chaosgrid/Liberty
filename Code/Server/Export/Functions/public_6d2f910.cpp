#include "Server-PCH.h"

PROC_DECLARE(0x6d2f910, internal_6d2f910, public_6d2f910);
extern "C" NAKED register_t __cdecl internal_6d2f910()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [esp+8]
        sub eax, dword ptr ds : [ecx]
        neg eax
        sbb eax, eax
        inc eax
        ret 8
        UNREACHABLE_TRAP(0x6d2f910)
    }
}
