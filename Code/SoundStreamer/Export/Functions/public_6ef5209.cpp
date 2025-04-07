#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4507);
CLANG_FORWARD_PROC_SYMBOL(public_6ef51f4);

#define public_6ef521f _public_6ef521f

PROC_DECLARE(0x6ef5209, internal_6ef5209, public_6ef5209);
extern "C" NAKED register_t __cdecl internal_6ef5209()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ef51f4
        test byte ptr ss : [esp+8], 1
        je public_6ef521f
        push esi
        call public_6ef4507
        pop ecx
        public_6ef521f : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ef5209)
    }
}

#undef public_6ef521f
