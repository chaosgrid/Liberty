#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_1000a3f0);
CLANG_FORWARD_PROC_SYMBOL(public_1000a418);

PROC_DECLARE(0x1000a3f0, internal_1000a3f0, public_1000a3f0);
extern "C" NAKED register_t __cdecl internal_1000a3f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push eax
        call public_1000a418
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x1000a3f0)
    }
}
