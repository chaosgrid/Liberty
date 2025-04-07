#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f9490);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);

#define public_65f94c6 _public_65f94c6
#define public_65f94c8 _public_65f94c8
#define public_65f94d0 _public_65f94d0
#define public_65f94d5 _public_65f94d5
#define public_65f94e1 _public_65f94e1
#define public_65f9502 _public_65f9502
#define public_65f950a _public_65f950a
#define public_65f9514 _public_65f9514
#define public_65f9520 _public_65f9520
#define public_65f952c _public_65f952c
#define public_65f9532 _public_65f9532
#define public_65f9550 _public_65f9550
#define public_65f9558 _public_65f9558
#define public_65f9562 _public_65f9562
#define public_65f959e _public_65f959e
#define public_65f95bb _public_65f95bb
#define public_65f95e0 _public_65f95e0
#define public_65f95ec _public_65f95ec
#define public_65f95f6 _public_65f95f6
#define public_65f9608 _public_65f9608
#define public_65f9610 _public_65f9610
#define public_65f9616 _public_65f9616
#define public_65f9620 _public_65f9620
#define public_65f962b _public_65f962b
#define public_65f9638 _public_65f9638
#define public_65f9650 _public_65f9650
#define public_65f9658 _public_65f9658
#define public_65f9662 _public_65f9662
#define public_65f9670 _public_65f9670
#define public_65f967f _public_65f967f
#define public_65f9690 _public_65f9690
#define public_65f969b _public_65f969b
#define public_65f969e _public_65f969e

PROC_DECLARE(0x65f9490, internal_65f9490, public_65f9490);
extern "C" NAKED register_t __cdecl internal_65f9490()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], edi
        jae public_65f95bb
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        je public_65f94c6
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ebp, ecx
        jb public_65f94c8
        public_65f94c6 : nop
        mov ecx, ebp
        public_65f94c8 : nop
        test edx, edx
        jne public_65f94d0
        xor eax, eax
        jmp public_65f94d5
        public_65f94d0 : nop
        sub eax, edx
        sar eax, 2
        public_65f94d5 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_65f94e1
        xor eax, eax
        public_65f94e1 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6600bb6
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        mov ecx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_65f9514
        public_65f9502 : nop
        test ecx, ecx
        je public_65f950a
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        public_65f950a : nop
        add eax, 4
        add ecx, 4
        cmp eax, ebx
        jne public_65f9502
        public_65f9514 : nop
        test ebp, ebp
        mov eax, ecx
        jbe public_65f9532
        mov esi, dword ptr ss : [esp+0x24]
        mov edx, ebp
        public_65f9520 : nop
        test eax, eax
        je public_65f952c
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_65f952c : nop
        add eax, 4
        dec edx
        jne public_65f9520
        public_65f9532 : nop
        mov edi, dword ptr ds : [edi+8]
        cmp ebx, edi
        lea esi, ds:[ebp*4]
        lea edx, ds:[esi+ecx]
        je public_65f9562
        mov eax, edx
        sub eax, esi
        sub eax, ecx
        add eax, ebx
        nop 
        lea esp, ss:[esp]
        public_65f9550 : nop
        test edx, edx
        je public_65f9558
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        public_65f9558 : nop
        add eax, 4
        add edx, 4
        cmp eax, edi
        jne public_65f9550
        public_65f9562 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6600bb0
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edx+eax*4]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_65f959e
        xor eax, eax
        mov eax, ebp
        pop edi
        lea eax, ds:[edx+eax*4]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_65f959e : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        add eax, ebp
        pop edi
        lea eax, ds:[edx+eax*4]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_65f95bb : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, ebp
        jae public_65f9638
        cmp edx, eax
        lea ebx, ds:[ebp*4]
        lea esi, ds:[ebx+edx]
        je public_65f95f6
        mov ecx, esi
        sub ecx, ebx
        lea esp, ss:[esp]
        public_65f95e0 : nop
        test esi, esi
        je public_65f95ec
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_65f95ec : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_65f95e0
        public_65f95f6 : nop
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        sub ebp, ecx
        je public_65f9616
        public_65f9608 : nop
        test eax, eax
        je public_65f9610
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        public_65f9610 : nop
        add eax, 4
        dec ebp
        jne public_65f9608
        public_65f9616 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp edx, ecx
        mov eax, edx
        je public_65f962b
        nop 
        public_65f9620 : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_65f9620
        public_65f962b : nop
        add dword ptr ds : [edi+8], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_65f9638 : nop
        test ebp, ebp
        jbe public_65f969e
        shl ebp, 2
        mov ecx, eax
        sub ecx, ebp
        cmp ecx, eax
        mov esi, eax
        je public_65f9662
        lea esp, ss:[esp]
        public_65f9650 : nop
        test esi, esi
        je public_65f9658
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], ebx
        public_65f9658 : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_65f9650
        public_65f9662 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ecx
        sub eax, ebp
        cmp edx, eax
        je public_65f967f
        lea ecx, ds:[ecx]
        public_65f9670 : nop
        mov esi, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edx
        mov dword ptr ds : [ecx], esi
        jne public_65f9670
        public_65f967f : nop
        lea ecx, ds:[edx+ebp]
        cmp edx, ecx
        mov eax, edx
        je public_65f969b
        mov edx, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_65f9690 : nop
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        add eax, 4
        cmp eax, ecx
        jne public_65f9690
        public_65f969b : nop
        add dword ptr ds : [edi+8], ebp
        public_65f969e : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x65f9490)
    }
}

#undef public_65f94c6
#undef public_65f94c8
#undef public_65f94d0
#undef public_65f94d5
#undef public_65f94e1
#undef public_65f9502
#undef public_65f950a
#undef public_65f9514
#undef public_65f9520
#undef public_65f952c
#undef public_65f9532
#undef public_65f9550
#undef public_65f9558
#undef public_65f9562
#undef public_65f959e
#undef public_65f95bb
#undef public_65f95e0
#undef public_65f95ec
#undef public_65f95f6
#undef public_65f9608
#undef public_65f9610
#undef public_65f9616
#undef public_65f9620
#undef public_65f962b
#undef public_65f9638
#undef public_65f9650
#undef public_65f9658
#undef public_65f9662
#undef public_65f9670
#undef public_65f967f
#undef public_65f9690
#undef public_65f969b
#undef public_65f969e
