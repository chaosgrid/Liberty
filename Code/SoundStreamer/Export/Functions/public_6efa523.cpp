#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efa15f);
CLANG_FORWARD_PROC_SYMBOL(public_6efa523);

#define public_6efa53e _public_6efa53e

PROC_DECLARE(0x6efa523, internal_6efa523, public_6efa523);
extern "C" NAKED register_t __cdecl internal_6efa523()
{
    __asm
    {
        cmp dword ptr ds : [public_6f02648], 0
        jne public_6efa53e
        push 0xFFFFFFFD
        call public_6efa15f
        pop ecx
        mov dword ptr ds : [public_6f02648], 1
        public_6efa53e : nop
        ret 
        UNREACHABLE_TRAP(0x6efa523)
    }
}

#undef public_6efa53e
