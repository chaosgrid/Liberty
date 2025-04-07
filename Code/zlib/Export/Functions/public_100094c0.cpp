#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_100092c0);

PROC_DECLARE(0x100094c0, internal_100094c0, public_100094c0);
extern "C" NAKED register_t __cdecl internal_100094c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push 0
        push eax
        call public_100092c0
        ret 4
        UNREACHABLE_TRAP(0x100094c0)
    }
}
