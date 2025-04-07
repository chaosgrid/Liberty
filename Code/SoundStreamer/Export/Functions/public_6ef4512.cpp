#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4512);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5907);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5932);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6662);
CLANG_FORWARD_PROC_SYMBOL(public_6ef66b9);

#define public_6ef453e _public_6ef453e
#define public_6ef4569 _public_6ef4569
#define public_6ef456a _public_6ef456a
#define public_6ef4578 _public_6ef4578

PROC_DECLARE(0x6ef4512, internal_6ef4512, public_6ef4512);
extern "C" NAKED register_t __cdecl internal_6ef4512()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        test esi, esi
        je public_6ef4578
        mov eax, dword ptr ds : [public_6f02674]
        cmp eax, 3
        jne public_6ef453e
        push esi
        call public_6ef5907
        pop ecx
        test eax, eax
        push esi
        je public_6ef456a
        push eax
        call public_6ef5932
        pop ecx
        pop ecx
        jmp public_6ef4578
        public_6ef453e : nop
        cmp eax, 2
        jne public_6ef4569
        lea eax, ss:[ebp+8]
        push eax
        lea eax, ss:[ebp-4]
        push eax
        push esi
        call public_6ef6662
        add esp, 0xC
        test eax, eax
        je public_6ef4569
        push eax
        push dword ptr ss : [ebp+8]
        push dword ptr ss : [ebp-4]
        call public_6ef66b9
        add esp, 0xC
        jmp public_6ef4578
        public_6ef4569 : nop
        push esi
        public_6ef456a : nop
        push 0
        push dword ptr ds : [public_6f02670]
        call dword ptr ds : [public_6efc07c]
        public_6ef4578 : nop
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef4512)
    }
}

#undef public_6ef453e
#undef public_6ef4569
#undef public_6ef456a
#undef public_6ef4578
