#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef419d);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4507);

#define public_6ef413a _public_6ef413a

PROC_DECLARE(0x6ef4124, internal_6ef4124, public_6ef4124);
extern "C" NAKED register_t __cdecl internal_6ef4124()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ef419d
        test byte ptr ss : [esp+8], 1
        je public_6ef413a
        push esi
        call public_6ef4507
        pop ecx
        public_6ef413a : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ef4124)
    }
}

#undef public_6ef413a
