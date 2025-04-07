#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef8c0e);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8c47);

#define public_6ef8c25 _public_6ef8c25
#define public_6ef8c3b _public_6ef8c3b
#define public_6ef8c46 _public_6ef8c46

PROC_DECLARE(0x6ef8c0e, internal_6ef8c0e, public_6ef8c0e);
extern "C" NAKED register_t __cdecl internal_6ef8c0e()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f010bc]
        cmp eax, 1
        je public_6ef8c25
        test eax, eax
        jne public_6ef8c46
        cmp dword ptr ds : [public_6f010c0], 1
        jne public_6ef8c46
        public_6ef8c25 : nop
        push 0xFC
        call public_6ef8c47
        mov eax, dword ptr ds : [public_6f01244]
        pop ecx
        test eax, eax
        je public_6ef8c3b
        call eax
        public_6ef8c3b : nop
        push 0xFF
        call public_6ef8c47
        pop ecx
        public_6ef8c46 : nop
        ret 
        UNREACHABLE_TRAP(0x6ef8c0e)
    }
}

#undef public_6ef8c25
#undef public_6ef8c3b
#undef public_6ef8c46
