#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2a60);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4a65);

#define public_6ef2a6a _public_6ef2a6a

PROC_DECLARE(0x6ef2a60, internal_6ef2a60, public_6ef2a60);
extern "C" NAKED register_t __cdecl internal_6ef2a60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jge public_6ef2a6a
        xor eax, eax
        public_6ef2a6a : nop
        push eax
        call public_6ef4a65
        add esp, 4
        ret 8
        UNREACHABLE_TRAP(0x6ef2a60)
    }
}

#undef public_6ef2a6a
