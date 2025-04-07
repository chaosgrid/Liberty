#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efa031);

#define public_6efa049 _public_6efa049

PROC_DECLARE(0x6efa031, internal_6efa031, public_6efa031);
extern "C" NAKED register_t __cdecl internal_6efa031()
{
    __asm
    {
        push esi
        push 1
        pop esi
        push dword ptr ss : [esp+0xC]
        push dword ptr ss : [esp+0xC]
        call dword ptr ds : [public_6efc0b8]
        test eax, eax
        je public_6efa049
        xor esi, esi
        public_6efa049 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6efa031)
    }
}

#undef public_6efa049
