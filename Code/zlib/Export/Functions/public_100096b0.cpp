#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10009510);

PROC_DECLARE(0x100096b0, internal_100096b0, public_100096b0);
extern "C" NAKED register_t __cdecl internal_100096b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push 0
        push 0
        push 0
        push eax
        call public_10009510
        ret 4
        UNREACHABLE_TRAP(0x100096b0)
    }
}
