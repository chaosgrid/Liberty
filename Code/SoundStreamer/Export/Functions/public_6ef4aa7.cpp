#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4aa7);

PROC_DECLARE(0x6ef4aa7, internal_6ef4aa7, public_6ef4aa7);
extern "C" NAKED register_t __cdecl internal_6ef4aa7()
{
    __asm
    {
        pop eax
        pop ecx
        xchg eax, dword ptr ss : [esp]
        jmp eax
        UNREACHABLE_TRAP(0x6ef4aa7)
    }
}
