#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c9610);

#define public_4c9626 _public_4c9626
#define public_4c9630 _public_4c9630
#define public_4c9654 _public_4c9654
#define public_4c9664 _public_4c9664

PROC_DECLARE(0x4c9610, internal_4c9610, public_4c9610);
extern "C" NAKED register_t __cdecl internal_4c9610()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        jne public_4c9626
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        test edx, edx
        sete al
        pop esi
        ret 4
        public_4c9626 : nop
        lea eax, ds:[ecx+4]
        push ebx
        lea ebx, ds:[ebx]
        public_4c9630 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_4c9664
        test cl, cl
        je public_4c9654
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_4c9664
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_4c9630
        public_4c9654 : nop
        xor eax, eax
        xor ecx, ecx
        test eax, eax
        sete cl
        pop ebx
        mov al, cl
        pop esi
        ret 4
        public_4c9664 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        xor ecx, ecx
        test eax, eax
        sete cl
        pop ebx
        mov al, cl
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4c9610)
    }
}

#undef public_4c9626
#undef public_4c9630
#undef public_4c9654
#undef public_4c9664
