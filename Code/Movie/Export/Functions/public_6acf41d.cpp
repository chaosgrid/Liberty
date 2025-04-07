#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf41d);

PROC_DECLARE(0x6acf41d, internal_6acf41d, public_6acf41d);
extern "C" NAKED register_t __cdecl internal_6acf41d()
{
    __asm
    {
        pop eax
        pop ecx
        xchg eax, dword ptr ss : [esp]
        jmp eax
        UNREACHABLE_TRAP(0x6acf41d)
    }
}
