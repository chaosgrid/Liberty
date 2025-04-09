#include "FreeLancer-PCH.h"

PROC_DECLARE(0x511b70, internal_511b70, public_511b70);
extern "C" NAKED register_t __cdecl internal_511b70()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        push 0x3F800000
        push 0x3F800000
        push edx
        call dword ptr ds : [eax+0x18]
        ret 4
        UNREACHABLE_TRAP(0x511b70)
    }
}
