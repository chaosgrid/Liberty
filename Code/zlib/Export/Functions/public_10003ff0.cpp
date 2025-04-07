#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10003e90);

PROC_DECLARE(0x10003ff0, internal_10003ff0, public_10003ff0);
extern "C" NAKED register_t __cdecl internal_10003ff0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push 1
        push 0
        push eax
        call public_10003e90
        ret 4
        UNREACHABLE_TRAP(0x10003ff0)
    }
}
