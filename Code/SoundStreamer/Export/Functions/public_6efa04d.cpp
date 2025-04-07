#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efa04d);

#define public_6efa061 _public_6efa061

PROC_DECLARE(0x6efa04d, internal_6efa04d, public_6efa04d);
extern "C" NAKED register_t __cdecl internal_6efa04d()
{
    __asm
    {
        push esi
        push 1
        pop esi
        push dword ptr ss : [esp+8]
        call dword ptr ds : [public_6efc030]
        test eax, eax
        je public_6efa061
        xor esi, esi
        public_6efa061 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6efa04d)
    }
}

#undef public_6efa061
