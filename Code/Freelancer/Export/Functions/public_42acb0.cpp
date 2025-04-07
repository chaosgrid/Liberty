#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42acb0);

#define public_42acc2 _public_42acc2
#define public_42ace3 _public_42ace3
#define public_42acf8 _public_42acf8
#define public_42ad05 _public_42ad05
#define public_42ad10 _public_42ad10
#define public_42ad1a _public_42ad1a
#define public_42ad21 _public_42ad21
#define public_42ad2b _public_42ad2b

PROC_DECLARE(0x42acb0, internal_42acb0, public_42acb0);
extern "C" NAKED register_t __cdecl internal_42acb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_667cc4]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_42ad2b
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push edi
        public_42acc2 : nop
        mov eax, dword ptr ds : [esi+0x24]
        lea edi, ds:[esi+0xC]
        shr eax, 0x14
        and eax, ebx
        test al, 0xF
        je public_42ace3
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        cmp eax, 0xFFFFFFFF
        jne public_42ace3
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0xC]
        public_42ace3 : nop
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x39]
        test cl, cl
        jne public_42ad05
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x39]
        test cl, cl
        jne public_42ad21
        public_42acf8 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x39]
        test cl, cl
        je public_42acf8
        jmp public_42ad21
        public_42ad05 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_42ad1a
        lea ecx, ds:[ecx]
        public_42ad10 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_42ad10
        public_42ad1a : nop
        cmp dword ptr ds : [esi+8], eax
        je public_42ad21
        mov esi, eax
        public_42ad21 : nop
        cmp esi, dword ptr ds : [public_667cc4]
        jne public_42acc2
        pop edi
        pop ebx
        public_42ad2b : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x42acb0)
    }
}

#undef public_42acc2
#undef public_42ace3
#undef public_42acf8
#undef public_42ad05
#undef public_42ad10
#undef public_42ad1a
#undef public_42ad21
#undef public_42ad2b
