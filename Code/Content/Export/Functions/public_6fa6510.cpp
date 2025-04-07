#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6510);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa6542 _public_6fa6542
#define public_6fa654a _public_6fa654a
#define public_6fa6555 _public_6fa6555
#define public_6fa655d _public_6fa655d
#define public_6fa6568 _public_6fa6568
#define public_6fa6576 _public_6fa6576
#define public_6fa6592 _public_6fa6592
#define public_6fa65ad _public_6fa65ad
#define public_6fa65b5 _public_6fa65b5
#define public_6fa65bd _public_6fa65bd
#define public_6fa65c5 _public_6fa65c5
#define public_6fa65cd _public_6fa65cd
#define public_6fa65dd _public_6fa65dd
#define public_6fa65e5 _public_6fa65e5
#define public_6fa65f0 _public_6fa65f0
#define public_6fa65fe _public_6fa65fe
#define public_6fa6610 _public_6fa6610
#define public_6fa6628 _public_6fa6628
#define public_6fa6646 _public_6fa6646
#define public_6fa6663 _public_6fa6663
#define public_6fa6677 _public_6fa6677
#define public_6fa667f _public_6fa667f
#define public_6fa6685 _public_6fa6685
#define public_6fa66aa _public_6fa66aa

PROC_DECLARE(0x6fa6510, internal_6fa6510, public_6fa6510);
extern "C" NAKED register_t __cdecl internal_6fa6510()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi]
        mov ebx, ecx
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [edi+4]
        add edi, 8
        lea ebp, ds:[ebx+8]
        cmp ebp, edi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ds : [ebx+4], ecx
        je public_6fa66aa
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6fa6542
        xor esi, esi
        jmp public_6fa654a
        public_6fa6542 : nop
        mov esi, dword ptr ds : [edi+8]
        sub esi, eax
        sar esi, 2
        public_6fa654a : nop
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        jne public_6fa6555
        xor ecx, ecx
        jmp public_6fa655d
        public_6fa6555 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        sar ecx, 2
        public_6fa655d : nop
        cmp esi, ecx
        ja public_6fa65ad
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_6fa6576
        public_6fa6568 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6fa6568
        public_6fa6576 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6fa6592
        mov edx, dword ptr ss : [ebp+4]
        xor edi, edi
        lea eax, ds:[edx+edi*4]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        public_6fa6592 : nop
        mov edi, dword ptr ds : [edi+8]
        mov edx, dword ptr ss : [ebp+4]
        sub edi, eax
        sar edi, 2
        lea eax, ds:[edx+edi*4]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        public_6fa65ad : nop
        test eax, eax
        jne public_6fa65b5
        xor esi, esi
        jmp public_6fa65bd
        public_6fa65b5 : nop
        mov esi, dword ptr ds : [edi+8]
        sub esi, eax
        sar esi, 2
        public_6fa65bd : nop
        test edx, edx
        jne public_6fa65c5
        xor ecx, ecx
        jmp public_6fa65cd
        public_6fa65c5 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        sub ecx, edx
        sar ecx, 2
        public_6fa65cd : nop
        cmp esi, ecx
        ja public_6fa6663
        test edx, edx
        jne public_6fa65dd
        xor ecx, ecx
        jmp public_6fa65e5
        public_6fa65dd : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        sar ecx, 2
        public_6fa65e5 : nop
        lea ecx, ds:[eax+ecx*4]
        cmp eax, ecx
        je public_6fa65fe
        lea esp, ss:[esp]
        public_6fa65f0 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6fa65f0
        public_6fa65fe : nop
        mov eax, dword ptr ds : [edi+8]
        cmp ecx, eax
        mov ebx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x18], eax
        mov esi, ecx
        je public_6fa6628
        mov edi, edi
        public_6fa6610 : nop
        push esi
        push ebx
        call public_6eb6740
        mov eax, dword ptr ss : [esp+0x20]
        add esi, 4
        add esp, 8
        add ebx, 4
        cmp esi, eax
        jne public_6fa6610
        public_6fa6628 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6fa6646
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [esp+0x10]
        xor edi, edi
        lea edx, ds:[ecx+edi*4]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6fa6646 : nop
        mov edi, dword ptr ds : [edi+8]
        mov ecx, dword ptr ss : [ebp+4]
        sub edi, eax
        mov eax, dword ptr ss : [esp+0x10]
        sar edi, 2
        lea edx, ds:[ecx+edi*4]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6fa6663 : nop
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        test ecx, ecx
        jne public_6fa6677
        xor eax, eax
        jmp public_6fa667f
        public_6fa6677 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        public_6fa667f : nop
        test eax, eax
        jge public_6fa6685
        xor eax, eax
        public_6fa6685 : nop
        shl eax, 2
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, ebp
        call public_6eed270
        mov dword ptr ss : [ebp+0xC], eax
        mov dword ptr ss : [ebp+8], eax
        public_6fa66aa : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6fa6510)
    }
}

#undef public_6fa6542
#undef public_6fa654a
#undef public_6fa6555
#undef public_6fa655d
#undef public_6fa6568
#undef public_6fa6576
#undef public_6fa6592
#undef public_6fa65ad
#undef public_6fa65b5
#undef public_6fa65bd
#undef public_6fa65c5
#undef public_6fa65cd
#undef public_6fa65dd
#undef public_6fa65e5
#undef public_6fa65f0
#undef public_6fa65fe
#undef public_6fa6610
#undef public_6fa6628
#undef public_6fa6646
#undef public_6fa6663
#undef public_6fa6677
#undef public_6fa667f
#undef public_6fa6685
#undef public_6fa66aa
