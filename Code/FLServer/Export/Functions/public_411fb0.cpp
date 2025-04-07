#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41926c);

PROC_DECLARE(0x411fb0, internal_411fb0, public_411fb0);
extern "C" NAKED register_t __cdecl internal_411fb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_41926c
        neg eax
        sbb eax, eax
        neg eax
        ret 4
        UNREACHABLE_TRAP(0x411fb0)
    }
}
