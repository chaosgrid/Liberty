#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_1000a494);
CLANG_FORWARD_PROC_SYMBOL(public_1000a652);

#define public_1000a5fe _public_1000a5fe
#define public_1000a608 _public_1000a608
#define public_1000a616 _public_1000a616
#define public_1000a628 _public_1000a628
#define public_1000a631 _public_1000a631
#define public_1000a643 _public_1000a643
#define public_1000a645 _public_1000a645

PROC_DECLARE(0x1000a5e0, internal_1000a5e0, public_1000a5e0);
extern "C" NAKED register_t __cdecl internal_1000a5e0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push esi
        push edi
        mov edi, 1
        mov esi, dword ptr ss : [ebp+0xC]
        test esi, esi
        jne public_1000a5fe
        cmp dword ptr ds : [public_1000e1d0], 0
        jne public_1000a5fe
        xor eax, eax
        jmp public_1000a645
        public_1000a5fe : nop
        cmp esi, 1
        je public_1000a608
        cmp esi, 2
        jne public_1000a616
        public_1000a608 : nop
        push dword ptr ss : [ebp+0x10]
        push esi
        push dword ptr ss : [ebp+8]
        call public_1000a494
        mov edi, eax
        public_1000a616 : nop
        test edi, edi
        je public_1000a628
        push dword ptr ss : [ebp+0x10]
        push esi
        push dword ptr ss : [ebp+8]
        call public_1000a652
        mov edi, eax
        public_1000a628 : nop
        test esi, esi
        je public_1000a631
        cmp esi, 3
        jne public_1000a643
        public_1000a631 : nop
        push dword ptr ss : [ebp+0x10]
        push esi
        push dword ptr ss : [ebp+8]
        call public_1000a494
        test eax, eax
        jne public_1000a643
        xor edi, edi
        public_1000a643 : nop
        mov eax, edi
        public_1000a645 : nop
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x1000a5e0)
    }
}

#undef public_1000a5fe
#undef public_1000a608
#undef public_1000a616
#undef public_1000a628
#undef public_1000a631
#undef public_1000a643
#undef public_1000a645
