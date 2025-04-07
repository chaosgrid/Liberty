#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efa015);

#define public_6efa02d _public_6efa02d

PROC_DECLARE(0x6efa015, internal_6efa015, public_6efa015);
extern "C" NAKED register_t __cdecl internal_6efa015()
{
    __asm
    {
        push esi
        push 1
        pop esi
        push dword ptr ss : [esp+0xC]
        push dword ptr ss : [esp+0xC]
        call dword ptr ds : [public_6efc034]
        test eax, eax
        je public_6efa02d
        xor esi, esi
        public_6efa02d : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6efa015)
    }
}

#undef public_6efa02d
