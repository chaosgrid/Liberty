#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_575e00);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);

PROC_DECLARE(0x5760d0, internal_5760d0, public_5760d0);
extern "C" NAKED register_t __cdecl internal_5760d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        push ecx
        call public_575e00
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x5760d0)
    }
}
