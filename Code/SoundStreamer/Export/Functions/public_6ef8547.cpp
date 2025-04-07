#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef5907);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6662);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8547);

#define public_6ef856d _public_6ef856d
#define public_6ef8570 _public_6ef8570
#define public_6ef8594 _public_6ef8594
#define public_6ef8597 _public_6ef8597
#define public_6ef85a5 _public_6ef85a5

PROC_DECLARE(0x6ef8547, internal_6ef8547, public_6ef8547);
extern "C" NAKED register_t __cdecl internal_6ef8547()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        mov eax, dword ptr ds : [public_6f02674]
        push esi
        cmp eax, 3
        jne public_6ef8570
        mov esi, dword ptr ss : [ebp+8]
        push esi
        call public_6ef5907
        test eax, eax
        pop ecx
        je public_6ef856d
        mov eax, dword ptr ds : [esi-4]
        sub eax, 9
        jmp public_6ef85a5
        public_6ef856d : nop
        push esi
        jmp public_6ef8597
        public_6ef8570 : nop
        cmp eax, 2
        jne public_6ef8594
        lea eax, ss:[ebp-4]
        push eax
        lea eax, ss:[ebp-8]
        push eax
        push dword ptr ss : [ebp+8]
        call public_6ef6662
        add esp, 0xC
        test eax, eax
        je public_6ef8594
        movzx eax, byte ptr ds : [eax]
        shl eax, 4
        jmp public_6ef85a5
        public_6ef8594 : nop
        push dword ptr ss : [ebp+8]
        public_6ef8597 : nop
        push 0
        push dword ptr ds : [public_6f02670]
        call dword ptr ds : [public_6efc098]
        public_6ef85a5 : nop
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef8547)
    }
}

#undef public_6ef856d
#undef public_6ef8570
#undef public_6ef8594
#undef public_6ef8597
#undef public_6ef85a5
