#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627d700);
CLANG_FORWARD_PROC_SYMBOL(public_627f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_627f7e0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_627d730 _public_627d730
#define public_627d735 _public_627d735
#define public_627d73d _public_627d73d
#define public_627d742 _public_627d742
#define public_627d74e _public_627d74e
#define public_627d770 _public_627d770
#define public_627d784 _public_627d784
#define public_627d7e7 _public_627d7e7
#define public_627d7ff _public_627d7ff
#define public_627d840 _public_627d840
#define public_627d857 _public_627d857
#define public_627d870 _public_627d870
#define public_627d87f _public_627d87f
#define public_627d888 _public_627d888
#define public_627d895 _public_627d895

PROC_DECLARE(0x627d700, internal_627d700, public_627d700);
extern "C" NAKED register_t __cdecl internal_627d700()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        push edi
        mov edi, eax
        jae public_627d7ff
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_627d730
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_627d735
        public_627d730 : nop
        mov ecx, 1
        public_627d735 : nop
        test edx, edx
        jne public_627d73d
        xor eax, eax
        jmp public_627d742
        public_627d73d : nop
        sub eax, edx
        sar eax, 2
        public_627d742 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+8], eax
        jge public_627d74e
        xor eax, eax
        public_627d74e : nop
        push ebx
        lea edx, ds:[eax*4]
        push ebp
        push edx
        call public_6391d9c
        mov ebp, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebp, edi
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, eax
        je public_627d784
        lea ecx, ds:[ecx]
        public_627d770 : nop
        push ebp
        push ebx
        call public_630cd00
        add ebp, 4
        add esp, 8
        add ebx, 4
        cmp ebp, edi
        jne public_627d770
        public_627d784 : nop
        lea eax, ss:[esp+0x18]
        push eax
        push 1
        push ebx
        mov ecx, esi
        call public_627f7e0
        mov ecx, dword ptr ds : [esi+8]
        add ebx, 4
        push ebx
        push ecx
        push edi
        mov ecx, esi
        call public_627f7b0
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_628f050
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 4
        lea ecx, ds:[edx+eax*4]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        pop ebp
        mov dword ptr ds : [esi+0xC], ecx
        pop ebx
        jne public_627d7e7
        xor ecx, ecx
        lea eax, ds:[edx+ecx*4+4]
        mov dword ptr ds : [esi+8], eax
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov al, 1
        pop esi
        pop ecx
        ret 
        public_627d7e7 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        lea eax, ds:[edx+ecx*4+4]
        mov dword ptr ds : [esi+8], eax
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov al, 1
        pop esi
        pop ecx
        ret 
        public_627d7ff : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_627d857
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_627f7b0
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0x10]
        push ecx
        sub edx, edi
        sar edx, 2
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_627f7e0
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_627d895
        mov edi, edi
        public_627d840 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_627d840
        add dword ptr ds : [esi+8], 4
        pop edi
        mov al, 1
        pop esi
        pop ecx
        ret 
        public_627d857 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_627f7b0
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_627d87f
        lea esp, ss:[esp]
        public_627d870 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_627d870
        public_627d87f : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_627d895
        public_627d888 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_627d888
        public_627d895 : nop
        add dword ptr ds : [esi+8], 4
        pop edi
        mov al, 1
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x627d700)
    }
}

#undef public_627d730
#undef public_627d735
#undef public_627d73d
#undef public_627d742
#undef public_627d74e
#undef public_627d770
#undef public_627d784
#undef public_627d7e7
#undef public_627d7ff
#undef public_627d840
#undef public_627d857
#undef public_627d870
#undef public_627d87f
#undef public_627d888
#undef public_627d895
