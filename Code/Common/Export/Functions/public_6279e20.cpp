#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a600);
CLANG_FORWARD_PROC_SYMBOL(public_6279e20);
CLANG_FORWARD_PROC_SYMBOL(public_627f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_627f7e0);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6279e5f _public_6279e5f
#define public_6279e64 _public_6279e64
#define public_6279e6c _public_6279e6c
#define public_6279e71 _public_6279e71
#define public_6279e7d _public_6279e7d
#define public_6279ea0 _public_6279ea0
#define public_6279eb4 _public_6279eb4
#define public_6279f10 _public_6279f10
#define public_6279f51 _public_6279f51
#define public_6279f5e _public_6279f5e
#define public_6279f73 _public_6279f73
#define public_6279f82 _public_6279f82
#define public_6279f90 _public_6279f90
#define public_6279f9b _public_6279f9b

PROC_DECLARE(0x6279e20, internal_6279e20, public_6279e20);
extern "C" NAKED register_t __cdecl internal_6279e20()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebp, edi
        sub ecx, eax
        sub ebp, edx
        sar ebp, 2
        sar ecx, 2
        cmp ecx, 1
        mov dword ptr ss : [esp+0x14], ebp
        jae public_6279f10
        test edx, edx
        je public_6279e5f
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_6279e64
        public_6279e5f : nop
        mov ecx, 1
        public_6279e64 : nop
        test edx, edx
        jne public_6279e6c
        xor eax, eax
        jmp public_6279e71
        public_6279e6c : nop
        sub eax, edx
        sar eax, 2
        public_6279e71 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jge public_6279e7d
        xor eax, eax
        public_6279e7d : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6391d9c
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        je public_6279eb4
        lea ebx, ds:[ebx]
        public_6279ea0 : nop
        push ebx
        push ebp
        call public_630cd00
        add ebx, 4
        add esp, 8
        add ebp, 4
        cmp ebx, edi
        jne public_6279ea0
        public_6279eb4 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push ebp
        call public_630cd00
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 4
        push ebp
        push ecx
        push edi
        mov ecx, esi
        call public_627f7b0
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x20]
        lea ecx, ds:[edi+eax*4]
        mov dword ptr ds : [esi+0xC], ecx
        add esp, 4
        mov ecx, esi
        call public_626a600
        mov ebp, dword ptr ss : [esp+0x14]
        lea edx, ds:[edi+eax*4+4]
        mov dword ptr ds : [esi+4], edi
        mov eax, edi
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        lea eax, ds:[eax+ebp*4]
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_6279f10 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6279f5e
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_627f7b0
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ss : [esp+0x20]
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        push ebx
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, esi
        call public_627f7e0
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_6279f9b
        public_6279f51 : nop
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6279f51
        jmp public_6279f9b
        public_6279f5e : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_627f7b0
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6279f82
        public_6279f73 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6279f73
        public_6279f82 : nop
        lea eax, ds:[edi+4]
        cmp edi, eax
        je public_6279f9b
        mov ecx, dword ptr ss : [esp+0x20]
        lea ecx, ds:[ecx]
        public_6279f90 : nop
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_6279f90
        public_6279f9b : nop
        add dword ptr ds : [esi+8], 4
        mov eax, dword ptr ds : [esi+4]
        pop edi
        pop esi
        lea eax, ds:[eax+ebp*4]
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6279e20)
    }
}

#undef public_6279e5f
#undef public_6279e64
#undef public_6279e6c
#undef public_6279e71
#undef public_6279e7d
#undef public_6279ea0
#undef public_6279eb4
#undef public_6279f10
#undef public_6279f51
#undef public_6279f5e
#undef public_6279f73
#undef public_6279f82
#undef public_6279f90
#undef public_6279f9b
