#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_427730);
CLANG_FORWARD_PROC_SYMBOL(public_501530);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_597c70);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_501542 _public_501542
#define public_50154a _public_50154a
#define public_50155e _public_50155e
#define public_501566 _public_501566
#define public_50158c _public_50158c
#define public_50158e _public_50158e
#define public_50159f _public_50159f
#define public_501625 _public_501625
#define public_501670 _public_501670
#define public_50167c _public_50167c
#define public_501690 _public_501690
#define public_5016b2 _public_5016b2
#define public_5016c1 _public_5016c1
#define public_5016d0 _public_5016d0
#define public_5016db _public_5016db
#define public_5016eb _public_5016eb
#define public_501706 _public_501706
#define public_501714 _public_501714
#define public_501717 _public_501717

PROC_DECLARE(0x501530, internal_501530, public_501530);
extern "C" NAKED register_t __cdecl internal_501530()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        push edi
        jne public_501542
        xor eax, eax
        jmp public_50154a
        public_501542 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, edx
        sar eax, 2
        public_50154a : nop
        mov ebx, dword ptr ss : [esp+0x18]
        cmp eax, ebx
        jae public_5016eb
        test edx, edx
        jne public_50155e
        xor ecx, ecx
        jmp public_501566
        public_50155e : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edx
        sar ecx, 2
        public_501566 : nop
        mov eax, dword ptr ds : [esi+8]
        sub ebx, ecx
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, ebx
        mov edi, eax
        jae public_501625
        test edx, edx
        je public_50158c
        sub eax, edx
        sar eax, 2
        cmp ebx, eax
        mov ebp, eax
        jb public_50158e
        public_50158c : nop
        mov ebp, ebx
        public_50158e : nop
        mov ecx, esi
        call public_5ad970
        add eax, ebp
        mov dword ptr ss : [esp+0x10], eax
        jns public_50159f
        xor eax, eax
        public_50159f : nop
        lea edx, ds:[eax*4]
        push edx
        call public_5b7e84
        add esp, 4
        mov ebp, eax
        mov eax, dword ptr ds : [esi+4]
        push ebp
        push edi
        push eax
        mov ecx, esi
        call public_597c70
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push ebx
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], eax
        call public_427730
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[edx+ebx*4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_597c70
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_53aaa0
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_5b7e1d
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ss:[ebp+edx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_5ad970
        add eax, ebx
        lea ecx, ss:[ebp+eax*4]
        pop edi
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_501625 : nop
        mov edx, eax
        sub edx, edi
        sar edx, 2
        cmp edx, ebx
        jae public_501690
        lea ecx, ds:[ebx*4]
        mov dword ptr ss : [esp+0x18], ecx
        add ecx, edi
        push ecx
        push eax
        push edi
        mov ecx, esi
        call public_597c70
        mov eax, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        push ebp
        sub ebx, ecx
        push ebx
        push eax
        mov ecx, esi
        call public_427730
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_50167c
        lea ebx, ds:[ebx]
        public_501670 : nop
        mov edx, dword ptr ss : [ebp]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_501670
        public_50167c : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        add ecx, eax
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_501690 : nop
        test ebx, ebx
        jbe public_501717
        push eax
        push eax
        shl ebx, 2
        sub eax, ebx
        push eax
        mov ecx, esi
        call public_597c70
        mov ecx, dword ptr ds : [esi+8]
        mov eax, ecx
        sub eax, ebx
        cmp edi, eax
        je public_5016c1
        public_5016b2 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_5016b2
        public_5016c1 : nop
        lea ecx, ds:[ebx+edi]
        cmp edi, ecx
        mov eax, edi
        je public_5016db
        mov edx, dword ptr ss : [esp+0x1C]
        mov edi, edi
        public_5016d0 : nop
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], edi
        add eax, 4
        cmp eax, ecx
        jne public_5016d0
        public_5016db : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, ebx
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_5016eb : nop
        test edx, edx
        je public_501717
        mov ecx, dword ptr ds : [esi+8]
        mov eax, ecx
        sub eax, edx
        sar eax, 2
        cmp ebx, eax
        jae public_501717
        mov eax, ecx
        cmp eax, ecx
        lea edx, ds:[edx+ebx*4]
        je public_501714
        public_501706 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_501706
        public_501714 : nop
        mov dword ptr ds : [esi+8], edx
        public_501717 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x501530)
    }
}

#undef public_501542
#undef public_50154a
#undef public_50155e
#undef public_501566
#undef public_50158c
#undef public_50158e
#undef public_50159f
#undef public_501625
#undef public_501670
#undef public_50167c
#undef public_501690
#undef public_5016b2
#undef public_5016c1
#undef public_5016d0
#undef public_5016db
#undef public_5016eb
#undef public_501706
#undef public_501714
#undef public_501717
