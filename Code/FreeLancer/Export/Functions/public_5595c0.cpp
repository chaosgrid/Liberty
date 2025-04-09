#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5595c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5595dc _public_5595dc
#define public_5595e4 _public_5595e4
#define public_5595ef _public_5595ef
#define public_5595f7 _public_5595f7
#define public_559602 _public_559602
#define public_559610 _public_559610
#define public_55962a _public_55962a
#define public_559643 _public_559643
#define public_55964b _public_55964b
#define public_559653 _public_559653
#define public_55965b _public_55965b
#define public_559663 _public_559663
#define public_559673 _public_559673
#define public_55967b _public_55967b
#define public_559682 _public_559682
#define public_559690 _public_559690
#define public_5596a0 _public_5596a0
#define public_5596a8 _public_5596a8
#define public_5596b2 _public_5596b2
#define public_5596cc _public_5596cc
#define public_5596e5 _public_5596e5
#define public_5596f9 _public_5596f9
#define public_559701 _public_559701
#define public_559707 _public_559707
#define public_559726 _public_559726
#define public_55972e _public_55972e
#define public_559738 _public_559738
#define public_55973e _public_55973e

PROC_DECLARE(0x5595c0, internal_5595c0, public_5595c0);
extern "C" NAKED register_t __cdecl internal_5595c0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ebx, ecx
        cmp ebx, esi
        push edi
        je public_55973e
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_5595dc
        xor edi, edi
        jmp public_5595e4
        public_5595dc : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, eax
        sar edi, 2
        public_5595e4 : nop
        mov edx, dword ptr ds : [ebx+4]
        test edx, edx
        jne public_5595ef
        xor ecx, ecx
        jmp public_5595f7
        public_5595ef : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 2
        public_5595f7 : nop
        cmp edi, ecx
        ja public_559643
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_559610
        public_559602 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_559602
        public_559610 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_55962a
        mov eax, dword ptr ds : [ebx+4]
        xor esi, esi
        lea ecx, ds:[eax+esi*4]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+8], ecx
        mov eax, ebx
        pop ebx
        ret 4
        public_55962a : nop
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
        public_559643 : nop
        test eax, eax
        jne public_55964b
        xor edi, edi
        jmp public_559653
        public_55964b : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, eax
        sar edi, 2
        public_559653 : nop
        test edx, edx
        jne public_55965b
        xor ecx, ecx
        jmp public_559663
        public_55965b : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        sub ecx, edx
        sar ecx, 2
        public_559663 : nop
        cmp edi, ecx
        ja public_5596e5
        test edx, edx
        jne public_559673
        xor ecx, ecx
        jmp public_55967b
        public_559673 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 2
        public_55967b : nop
        lea ecx, ds:[eax+ecx*4]
        cmp eax, ecx
        je public_559690
        public_559682 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_559682
        public_559690 : nop
        mov edi, dword ptr ds : [esi+8]
        cmp ecx, edi
        mov edx, dword ptr ds : [ebx+8]
        mov eax, ecx
        je public_5596b2
        lea esp, ss:[esp]
        public_5596a0 : nop
        test edx, edx
        je public_5596a8
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        public_5596a8 : nop
        add eax, 4
        add edx, 4
        cmp eax, edi
        jne public_5596a0
        public_5596b2 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_5596cc
        mov edx, dword ptr ds : [ebx+4]
        xor esi, esi
        lea eax, ds:[edx+esi*4]
        pop edi
        mov dword ptr ds : [ebx+8], eax
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        public_5596cc : nop
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
        public_5596e5 : nop
        push edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_5596f9
        xor eax, eax
        jmp public_559701
        public_5596f9 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_559701 : nop
        test eax, eax
        jge public_559707
        xor eax, eax
        public_559707 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_5b7e84
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        je public_559738
        public_559726 : nop
        test ecx, ecx
        je public_55972e
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        public_55972e : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_559726
        public_559738 : nop
        mov dword ptr ds : [ebx+0xC], ecx
        mov dword ptr ds : [ebx+8], ecx
        public_55973e : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x5595c0)
    }
}

#undef public_5595dc
#undef public_5595e4
#undef public_5595ef
#undef public_5595f7
#undef public_559602
#undef public_559610
#undef public_55962a
#undef public_559643
#undef public_55964b
#undef public_559653
#undef public_55965b
#undef public_559663
#undef public_559673
#undef public_55967b
#undef public_559682
#undef public_559690
#undef public_5596a0
#undef public_5596a8
#undef public_5596b2
#undef public_5596cc
#undef public_5596e5
#undef public_5596f9
#undef public_559701
#undef public_559707
#undef public_559726
#undef public_55972e
#undef public_559738
#undef public_55973e
