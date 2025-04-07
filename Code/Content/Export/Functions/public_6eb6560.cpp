#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6560);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eb657c _public_6eb657c
#define public_6eb6584 _public_6eb6584
#define public_6eb658f _public_6eb658f
#define public_6eb6597 _public_6eb6597
#define public_6eb65a2 _public_6eb65a2
#define public_6eb65b0 _public_6eb65b0
#define public_6eb65ca _public_6eb65ca
#define public_6eb65e3 _public_6eb65e3
#define public_6eb65eb _public_6eb65eb
#define public_6eb65f3 _public_6eb65f3
#define public_6eb65fb _public_6eb65fb
#define public_6eb6603 _public_6eb6603
#define public_6eb6613 _public_6eb6613
#define public_6eb661b _public_6eb661b
#define public_6eb6622 _public_6eb6622
#define public_6eb6630 _public_6eb6630
#define public_6eb6640 _public_6eb6640
#define public_6eb6648 _public_6eb6648
#define public_6eb6652 _public_6eb6652
#define public_6eb666c _public_6eb666c
#define public_6eb6685 _public_6eb6685
#define public_6eb6699 _public_6eb6699
#define public_6eb66a1 _public_6eb66a1
#define public_6eb66a7 _public_6eb66a7
#define public_6eb66c6 _public_6eb66c6
#define public_6eb66ce _public_6eb66ce
#define public_6eb66d8 _public_6eb66d8
#define public_6eb66de _public_6eb66de

PROC_DECLARE(0x6eb6560, internal_6eb6560, public_6eb6560);
extern "C" NAKED register_t __cdecl internal_6eb6560()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ebx, ecx
        cmp ebx, esi
        push edi
        je public_6eb66de
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6eb657c
        xor edi, edi
        jmp public_6eb6584
        public_6eb657c : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, eax
        sar edi, 2
        public_6eb6584 : nop
        mov edx, dword ptr ds : [ebx+4]
        test edx, edx
        jne public_6eb658f
        xor ecx, ecx
        jmp public_6eb6597
        public_6eb658f : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 2
        public_6eb6597 : nop
        cmp edi, ecx
        ja public_6eb65e3
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_6eb65b0
        public_6eb65a2 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6eb65a2
        public_6eb65b0 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6eb65ca
        mov eax, dword ptr ds : [ebx+4]
        xor esi, esi
        lea ecx, ds:[eax+esi*4]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+8], ecx
        mov eax, ebx
        pop ebx
        ret 4
        public_6eb65ca : nop
        mov esi, dword ptr ds : [esi+8]
        sub esi, eax
        mov eax, dword ptr ds : [ebx+4]
        sar esi, 2
        lea ecx, ds:[eax+esi*4]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+8], ecx
        mov eax, ebx
        pop ebx
        ret 4
        public_6eb65e3 : nop
        test eax, eax
        jne public_6eb65eb
        xor edi, edi
        jmp public_6eb65f3
        public_6eb65eb : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, eax
        sar edi, 2
        public_6eb65f3 : nop
        test edx, edx
        jne public_6eb65fb
        xor ecx, ecx
        jmp public_6eb6603
        public_6eb65fb : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        sub ecx, edx
        sar ecx, 2
        public_6eb6603 : nop
        cmp edi, ecx
        ja public_6eb6685
        test edx, edx
        jne public_6eb6613
        xor ecx, ecx
        jmp public_6eb661b
        public_6eb6613 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 2
        public_6eb661b : nop
        lea ecx, ds:[eax+ecx*4]
        cmp eax, ecx
        je public_6eb6630
        public_6eb6622 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6eb6622
        public_6eb6630 : nop
        mov edi, dword ptr ds : [esi+8]
        cmp ecx, edi
        mov edx, dword ptr ds : [ebx+8]
        mov eax, ecx
        je public_6eb6652
        lea esp, ss:[esp]
        public_6eb6640 : nop
        test edx, edx
        je public_6eb6648
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        public_6eb6648 : nop
        add eax, 4
        add edx, 4
        cmp eax, edi
        jne public_6eb6640
        public_6eb6652 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6eb666c
        mov edx, dword ptr ds : [ebx+4]
        xor esi, esi
        lea eax, ds:[edx+esi*4]
        pop edi
        mov dword ptr ds : [ebx+8], eax
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        public_6eb666c : nop
        mov esi, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ebx+4]
        sub esi, eax
        sar esi, 2
        lea eax, ds:[edx+esi*4]
        pop edi
        mov dword ptr ds : [ebx+8], eax
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        public_6eb6685 : nop
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6eb6699
        xor eax, eax
        jmp public_6eb66a1
        public_6eb6699 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6eb66a1 : nop
        test eax, eax
        jge public_6eb66a7
        xor eax, eax
        public_6eb66a7 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        je public_6eb66d8
        public_6eb66c6 : nop
        test ecx, ecx
        je public_6eb66ce
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        public_6eb66ce : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6eb66c6
        public_6eb66d8 : nop
        mov dword ptr ds : [ebx+0xC], ecx
        mov dword ptr ds : [ebx+8], ecx
        public_6eb66de : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6eb6560)
    }
}

#undef public_6eb657c
#undef public_6eb6584
#undef public_6eb658f
#undef public_6eb6597
#undef public_6eb65a2
#undef public_6eb65b0
#undef public_6eb65ca
#undef public_6eb65e3
#undef public_6eb65eb
#undef public_6eb65f3
#undef public_6eb65fb
#undef public_6eb6603
#undef public_6eb6613
#undef public_6eb661b
#undef public_6eb6622
#undef public_6eb6630
#undef public_6eb6640
#undef public_6eb6648
#undef public_6eb6652
#undef public_6eb666c
#undef public_6eb6685
#undef public_6eb6699
#undef public_6eb66a1
#undef public_6eb66a7
#undef public_6eb66c6
#undef public_6eb66ce
#undef public_6eb66d8
#undef public_6eb66de
