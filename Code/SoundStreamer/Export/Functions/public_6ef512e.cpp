#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4507);
CLANG_FORWARD_PROC_SYMBOL(public_6ef51d1);

#define public_6ef5144 _public_6ef5144

PROC_DECLARE(0x6ef512e, internal_6ef512e, public_6ef512e);
extern "C" NAKED register_t __cdecl internal_6ef512e()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ef51d1
        test byte ptr ss : [esp+8], 1
        je public_6ef5144
        push esi
        call public_6ef4507
        pop ecx
        public_6ef5144 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ef512e)
    }
}

#undef public_6ef5144
