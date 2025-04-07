#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf424);

PROC_DECLARE(0x6acf424, internal_6acf424, public_6acf424);
extern "C" NAKED register_t __cdecl internal_6acf424()
{
    __asm
    {
        pop eax
        pop ecx
        xchg eax, dword ptr ss : [esp]
        jmp eax
        UNREACHABLE_TRAP(0x6acf424)
    }
}
