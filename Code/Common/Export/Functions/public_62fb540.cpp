#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fb540);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62fb55e _public_62fb55e
#define public_62fb566 _public_62fb566
#define public_62fb571 _public_62fb571
#define public_62fb579 _public_62fb579
#define public_62fb584 _public_62fb584
#define public_62fb592 _public_62fb592
#define public_62fb5ae _public_62fb5ae
#define public_62fb5bf _public_62fb5bf
#define public_62fb5c9 _public_62fb5c9
#define public_62fb5d1 _public_62fb5d1
#define public_62fb5d9 _public_62fb5d9
#define public_62fb5e1 _public_62fb5e1
#define public_62fb5e9 _public_62fb5e9
#define public_62fb5f9 _public_62fb5f9
#define public_62fb601 _public_62fb601
#define public_62fb608 _public_62fb608
#define public_62fb616 _public_62fb616
#define public_62fb622 _public_62fb622
#define public_62fb636 _public_62fb636
#define public_62fb654 _public_62fb654
#define public_62fb671 _public_62fb671
#define public_62fb685 _public_62fb685
#define public_62fb68d _public_62fb68d
#define public_62fb693 _public_62fb693
#define public_62fb6b2 _public_62fb6b2
#define public_62fb6c6 _public_62fb6c6

PROC_DECLARE(0x62fb540, internal_62fb540, public_62fb540);
extern "C" NAKED register_t __cdecl internal_62fb540()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, ecx
        cmp edi, ebp
        mov dword ptr ss : [esp+0x10], edi
        je public_62fb5bf
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_62fb55e
        xor esi, esi
        jmp public_62fb566
        public_62fb55e : nop
        mov esi, dword ptr ss : [ebp+8]
        sub esi, eax
        sar esi, 2
        public_62fb566 : nop
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        jne public_62fb571
        xor ecx, ecx
        jmp public_62fb579
        public_62fb571 : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, edx
        sar ecx, 2
        public_62fb579 : nop
        cmp esi, ecx
        ja public_62fb5c9
        mov ecx, dword ptr ss : [ebp+8]
        cmp eax, ecx
        je public_62fb592
        public_62fb584 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_62fb584
        public_62fb592 : nop
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_62fb5ae
        mov eax, dword ptr ds : [edi+4]
        xor ebp, ebp
        lea ecx, ds:[eax+ebp*4]
        mov dword ptr ds : [edi+8], ecx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_62fb5ae : nop
        mov ebp, dword ptr ss : [ebp+8]
        sub ebp, eax
        mov eax, dword ptr ds : [edi+4]
        sar ebp, 2
        lea ecx, ds:[eax+ebp*4]
        mov dword ptr ds : [edi+8], ecx
        public_62fb5bf : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_62fb5c9 : nop
        test eax, eax
        jne public_62fb5d1
        xor esi, esi
        jmp public_62fb5d9
        public_62fb5d1 : nop
        mov esi, dword ptr ss : [ebp+8]
        sub esi, eax
        sar esi, 2
        public_62fb5d9 : nop
        test edx, edx
        jne public_62fb5e1
        xor ecx, ecx
        jmp public_62fb5e9
        public_62fb5e1 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, edx
        sar ecx, 2
        public_62fb5e9 : nop
        cmp esi, ecx
        ja public_62fb671
        test edx, edx
        jne public_62fb5f9
        xor ecx, ecx
        jmp public_62fb601
        public_62fb5f9 : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, edx
        sar ecx, 2
        public_62fb601 : nop
        lea ecx, ds:[eax+ecx*4]
        cmp eax, ecx
        je public_62fb616
        public_62fb608 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_62fb608
        public_62fb616 : nop
        mov ebx, dword ptr ss : [ebp+8]
        cmp ecx, ebx
        mov edi, dword ptr ds : [edi+8]
        mov esi, ecx
        je public_62fb636
        public_62fb622 : nop
        push esi
        push edi
        call public_630cd00
        add esi, 4
        add esp, 8
        add edi, 4
        cmp esi, ebx
        jne public_62fb622
        public_62fb636 : nop
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_62fb654
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax+4]
        pop edi
        xor ebp, ebp
        pop esi
        lea ecx, ds:[edx+ebp*4]
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        pop ecx
        ret 4
        public_62fb654 : nop
        mov ebp, dword ptr ss : [ebp+8]
        sub ebp, eax
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax+4]
        pop edi
        sar ebp, 2
        pop esi
        lea ecx, ds:[edx+ebp*4]
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        pop ecx
        ret 4
        public_62fb671 : nop
        push edx
        call public_6391d5a
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        test ecx, ecx
        jne public_62fb685
        xor eax, eax
        jmp public_62fb68d
        public_62fb685 : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 2
        public_62fb68d : nop
        test eax, eax
        jge public_62fb693
        xor eax, eax
        public_62fb693 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6391d9c
        mov dword ptr ds : [edi+4], eax
        mov ebx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ss : [ebp+4]
        add esp, 4
        cmp esi, ebx
        mov edi, eax
        je public_62fb6c6
        public_62fb6b2 : nop
        push esi
        push edi
        call public_630cd00
        add esi, 4
        add esp, 8
        add edi, 4
        cmp esi, ebx
        jne public_62fb6b2
        public_62fb6c6 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], edi
        mov dword ptr ds : [eax+0xC], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62fb540)
    }
}

#undef public_62fb55e
#undef public_62fb566
#undef public_62fb571
#undef public_62fb579
#undef public_62fb584
#undef public_62fb592
#undef public_62fb5ae
#undef public_62fb5bf
#undef public_62fb5c9
#undef public_62fb5d1
#undef public_62fb5d9
#undef public_62fb5e1
#undef public_62fb5e9
#undef public_62fb5f9
#undef public_62fb601
#undef public_62fb608
#undef public_62fb616
#undef public_62fb622
#undef public_62fb636
#undef public_62fb654
#undef public_62fb671
#undef public_62fb685
#undef public_62fb68d
#undef public_62fb693
#undef public_62fb6b2
#undef public_62fb6c6
