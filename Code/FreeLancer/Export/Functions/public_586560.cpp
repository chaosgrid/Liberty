#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_427730);
CLANG_FORWARD_PROC_SYMBOL(public_527820);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_586560);
CLANG_FORWARD_PROC_SYMBOL(public_597c70);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5865d6 _public_5865d6
#define public_5865ef _public_5865ef
#define public_586602 _public_586602
#define public_58661a _public_58661a
#define public_586626 _public_586626
#define public_586638 _public_586638
#define public_58668d _public_58668d
#define public_586692 _public_586692
#define public_58669a _public_58669a
#define public_58669f _public_58669f
#define public_5866ab _public_5866ab
#define public_58672c _public_58672c
#define public_586770 _public_586770
#define public_58677e _public_58677e
#define public_586793 _public_586793
#define public_5867a2 _public_5867a2
#define public_5867b0 _public_5867b0
#define public_5867bc _public_5867bc
#define public_5867c0 _public_5867c0
#define public_5867d9 _public_5867d9
#define public_5867f0 _public_5867f0

PROC_DECLARE(0x586560, internal_586560, public_586560);
extern "C" NAKED register_t __cdecl internal_586560()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push esi
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0x550]
        mov eax, dword ptr ds : [ebx+0x554]
        lea esi, ds:[ebx+0x54C]
        push edi
        push ecx
        push eax
        push eax
        call public_527820
        mov edi, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        push eax
        push edi
        mov ecx, esi
        call public_53aaa0
        mov eax, dword ptr ss : [esp+0x2C]
        test eax, eax
        mov dword ptr ds : [esi+8], edi
        je public_5867f0
        add ebx, 0x32C
        mov ecx, ebx
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_5867f0
        push ebx
        call dword ptr ds : [public_5c6b70]
        mov edi, eax
        mov eax, dword ptr ds : [edi+0x134]
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x14], edi
        jne public_5865d6
        xor edx, edx
        jmp public_5865ef
        public_5865d6 : nop
        mov ecx, dword ptr ds : [edi+0x138]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_5865ef : nop
        test edx, edx
        jle public_5867f0
        xor ebx, ebx
        push ebp
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], edx
        public_586602 : nop
        mov edx, dword ptr ds : [edi+0x134]
        mov ecx, dword ptr ds : [ebx+edx+8]
        test ecx, ecx
        lea eax, ds:[ebx+edx+4]
        jne public_58661a
        mov dword ptr ss : [esp+0x10], ecx
        jmp public_586626
        public_58661a : nop
        mov eax, dword ptr ds : [eax+8]
        sub eax, ecx
        sar eax, 2
        mov dword ptr ss : [esp+0x10], eax
        public_586626 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        xor eax, eax
        test ecx, ecx
        mov dword ptr ss : [esp+0x14], eax
        jle public_5867d9
        public_586638 : nop
        mov ecx, dword ptr ds : [edi+0x134]
        mov edx, dword ptr ds : [ebx+ecx+8]
        mov eax, dword ptr ds : [edx+eax*4]
        push eax
        mov eax, dword ptr ss : [esp+0x34]
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        jne public_5867c0
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        mov ebp, dword ptr ds : [edi+0x134]
        sub ecx, eax
        sar ecx, 2
        add ebp, ebx
        cmp ecx, 1
        mov edi, eax
        jae public_58672c
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_58668d
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_586692
        public_58668d : nop
        mov ecx, 1
        public_586692 : nop
        test edx, edx
        jne public_58669a
        xor eax, eax
        jmp public_58669f
        public_58669a : nop
        sub eax, edx
        sar eax, 2
        public_58669f : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x28], eax
        jge public_5866ab
        xor eax, eax
        public_5866ab : nop
        lea edx, ds:[eax*4]
        push edx
        call public_5b7e84
        add esp, 4
        mov ebx, eax
        mov eax, dword ptr ds : [esi+4]
        push ebx
        push edi
        push eax
        mov ecx, esi
        call public_597c70
        push ebp
        push 1
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], eax
        call public_427730
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [esi+8]
        add ecx, 4
        push ecx
        push edx
        push edi
        mov ecx, esi
        call public_597c70
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_53aaa0
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x2C]
        lea ecx, ds:[ebx+eax*4]
        mov dword ptr ds : [esi+0xC], ecx
        add esp, 4
        mov ecx, esi
        call public_5ad970
        lea edx, ds:[ebx+eax*4+4]
        mov dword ptr ds : [esi+4], ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], edx
        jmp public_5867c0
        public_58672c : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_58677e
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_597c70
        mov eax, dword ptr ds : [esi+8]
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        push ebp
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, esi
        call public_427730
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_5867bc
        lea esp, ss:[esp]
        public_586770 : nop
        mov edx, dword ptr ss : [ebp]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_586770
        jmp public_5867bc
        public_58677e : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_597c70
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_5867a2
        public_586793 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_586793
        public_5867a2 : nop
        lea eax, ds:[edi+4]
        cmp edi, eax
        je public_5867bc
        lea esp, ss:[esp]
        public_5867b0 : nop
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ds : [edi], ecx
        add edi, 4
        cmp edi, eax
        jne public_5867b0
        public_5867bc : nop
        add dword ptr ds : [esi+8], 4
        public_5867c0 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x18]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jl public_586638
        public_5867d9 : nop
        mov eax, dword ptr ss : [esp+0x20]
        add ebx, 0x14
        dec eax
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], eax
        jne public_586602
        pop ebp
        public_5867f0 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x586560)
    }
}

#undef public_5865d6
#undef public_5865ef
#undef public_586602
#undef public_58661a
#undef public_586626
#undef public_586638
#undef public_58668d
#undef public_586692
#undef public_58669a
#undef public_58669f
#undef public_5866ab
#undef public_58672c
#undef public_586770
#undef public_58677e
#undef public_586793
#undef public_5867a2
#undef public_5867b0
#undef public_5867bc
#undef public_5867c0
#undef public_5867d9
#undef public_5867f0
