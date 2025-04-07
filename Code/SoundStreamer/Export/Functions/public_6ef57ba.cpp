#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef5672);
CLANG_FORWARD_PROC_SYMBOL(public_6ef57ba);
CLANG_FORWARD_PROC_SYMBOL(public_6ef58bf);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6406);

#define public_6ef57f6 _public_6ef57f6
#define public_6ef5800 _public_6ef5800
#define public_6ef5810 _public_6ef5810
#define public_6ef5813 _public_6ef5813

PROC_DECLARE(0x6ef57ba, internal_6ef57ba, public_6ef57ba);
extern "C" NAKED register_t __cdecl internal_6ef57ba()
{
    __asm
    {
        xor eax, eax
        push 0
        cmp dword ptr ss : [esp+8], eax
        push 0x1000
        sete al
        push eax
        call dword ptr ds : [public_6efc0a8]
        test eax, eax
        mov dword ptr ds : [public_6f02670], eax
        je public_6ef5810
        call public_6ef5672
        cmp eax, 3
        mov dword ptr ds : [public_6f02674], eax
        jne public_6ef57f6
        push 0x3F8
        call public_6ef58bf
        pop ecx
        jmp public_6ef5800
        public_6ef57f6 : nop
        cmp eax, 2
        jne public_6ef5813
        call public_6ef6406
        public_6ef5800 : nop
        test eax, eax
        jne public_6ef5813
        push dword ptr ds : [public_6f02670]
        call dword ptr ds : [public_6efc014]
        public_6ef5810 : nop
        xor eax, eax
        ret 
        public_6ef5813 : nop
        push 1
        pop eax
        ret 
        UNREACHABLE_TRAP(0x6ef57ba)
    }
}

#undef public_6ef57f6
#undef public_6ef5800
#undef public_6ef5810
#undef public_6ef5813
