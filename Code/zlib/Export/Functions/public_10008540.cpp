#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10008500);
CLANG_FORWARD_PROC_SYMBOL(public_10008540);

#define public_10008557 _public_10008557
#define public_1000857b _public_1000857b
#define public_10008582 _public_10008582
#define public_1000858c _public_1000858c

PROC_DECLARE(0x10008540, internal_10008540, public_10008540);
extern "C" NAKED register_t __cdecl internal_10008540()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_1000858c
        cmp eax, 1
        jne public_1000858c
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        public_10008557 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_10008582
        test cl, cl
        je public_1000857b
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_10008582
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_10008557
        public_1000857b : nop
        pop esi
        xor eax, eax
        pop ebx
        ret 0xC
        public_10008582 : nop
        sbb eax, eax
        pop esi
        sbb eax, 0xFFFFFFFF
        pop ebx
        ret 0xC
        public_1000858c : nop
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        call public_10008500
        ret 0xC
        UNREACHABLE_TRAP(0x10008540)
    }
}

#undef public_10008557
#undef public_1000857b
#undef public_10008582
#undef public_1000858c
