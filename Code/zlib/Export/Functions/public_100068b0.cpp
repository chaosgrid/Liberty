#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_100068b0);
CLANG_FORWARD_PROC_SYMBOL(public_1000a470);

PROC_DECLARE(0x100068b0, internal_100068b0, public_100068b0);
extern "C" NAKED register_t __cdecl internal_100068b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push eax
        call public_1000a470
        add esp, 4
        ret 8
        UNREACHABLE_TRAP(0x100068b0)
    }
}
