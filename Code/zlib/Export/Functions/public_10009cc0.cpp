#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10009aa0);
CLANG_FORWARD_PROC_SYMBOL(public_10009cc0);

PROC_DECLARE(0x10009cc0, internal_10009cc0, public_10009cc0);
extern "C" NAKED register_t __cdecl internal_10009cc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push 0
        push 0
        push eax
        call public_10009aa0
        ret 4
        UNREACHABLE_TRAP(0x10009cc0)
    }
}
