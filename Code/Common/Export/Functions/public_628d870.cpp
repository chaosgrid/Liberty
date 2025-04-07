#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a600);
CLANG_FORWARD_PROC_SYMBOL(public_627f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_627f7e0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_628d882 _public_628d882
#define public_628d88a _public_628d88a
#define public_628d89e _public_628d89e
#define public_628d8a6 _public_628d8a6
#define public_628d8cc _public_628d8cc
#define public_628d8ce _public_628d8ce
#define public_628d8df _public_628d8df
#define public_628d965 _public_628d965
#define public_628d9b0 _public_628d9b0
#define public_628d9bc _public_628d9bc
#define public_628d9d0 _public_628d9d0
#define public_628d9f2 _public_628d9f2
#define public_628da01 _public_628da01
#define public_628da10 _public_628da10
#define public_628da1b _public_628da1b
#define public_628da2b _public_628da2b
#define public_628da46 _public_628da46
#define public_628da54 _public_628da54
#define public_628da57 _public_628da57

PROC_DECLARE(0x628d870, internal_628d870, public_628d870);
extern "C" NAKED register_t __cdecl internal_628d870()
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
        jne public_628d882
        xor eax, eax
        jmp public_628d88a
        public_628d882 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, edx
        sar eax, 2
        public_628d88a : nop
        mov ebx, dword ptr ss : [esp+0x18]
        cmp eax, ebx
        jae public_628da2b
        test edx, edx
        jne public_628d89e
        xor ecx, ecx
        jmp public_628d8a6
        public_628d89e : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edx
        sar ecx, 2
        public_628d8a6 : nop
        mov eax, dword ptr ds : [esi+8]
        sub ebx, ecx
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, ebx
        mov edi, eax
        jae public_628d965
        test edx, edx
        je public_628d8cc
        sub eax, edx
        sar eax, 2
        cmp ebx, eax
        mov ebp, eax
        jb public_628d8ce
        public_628d8cc : nop
        mov ebp, ebx
        public_628d8ce : nop
        mov ecx, esi
        call public_626a600
        add eax, ebp
        mov dword ptr ss : [esp+0x10], eax
        jns public_628d8df
        xor eax, eax
        public_628d8df : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6391d9c
        add esp, 4
        mov ebp, eax
        mov eax, dword ptr ds : [esi+4]
        push ebp
        push edi
        push eax
        mov ecx, esi
        call public_627f7b0
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push ebx
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], eax
        call public_627f7e0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[edx+ebx*4]
        push eax
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
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ss:[ebp+edx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_626a600
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
        public_628d965 : nop
        mov edx, eax
        sub edx, edi
        sar edx, 2
        cmp edx, ebx
        jae public_628d9d0
        lea ecx, ds:[ebx*4]
        mov dword ptr ss : [esp+0x18], ecx
        add ecx, edi
        push ecx
        push eax
        push edi
        mov ecx, esi
        call public_627f7b0
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
        call public_627f7e0
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_628d9bc
        lea ebx, ds:[ebx]
        public_628d9b0 : nop
        mov edx, dword ptr ss : [ebp]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_628d9b0
        public_628d9bc : nop
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
        public_628d9d0 : nop
        test ebx, ebx
        jbe public_628da57
        push eax
        push eax
        shl ebx, 2
        sub eax, ebx
        push eax
        mov ecx, esi
        call public_627f7b0
        mov ecx, dword ptr ds : [esi+8]
        mov eax, ecx
        sub eax, ebx
        cmp edi, eax
        je public_628da01
        public_628d9f2 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_628d9f2
        public_628da01 : nop
        lea ecx, ds:[ebx+edi]
        cmp edi, ecx
        mov eax, edi
        je public_628da1b
        mov edx, dword ptr ss : [esp+0x1C]
        mov edi, edi
        public_628da10 : nop
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], edi
        add eax, 4
        cmp eax, ecx
        jne public_628da10
        public_628da1b : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, ebx
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_628da2b : nop
        test edx, edx
        je public_628da57
        mov ecx, dword ptr ds : [esi+8]
        mov eax, ecx
        sub eax, edx
        sar eax, 2
        cmp ebx, eax
        jae public_628da57
        mov eax, ecx
        cmp eax, ecx
        lea edx, ds:[edx+ebx*4]
        je public_628da54
        public_628da46 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_628da46
        public_628da54 : nop
        mov dword ptr ds : [esi+8], edx
        public_628da57 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x628d870)
    }
}

#undef public_628d882
#undef public_628d88a
#undef public_628d89e
#undef public_628d8a6
#undef public_628d8cc
#undef public_628d8ce
#undef public_628d8df
#undef public_628d965
#undef public_628d9b0
#undef public_628d9bc
#undef public_628d9d0
#undef public_628d9f2
#undef public_628da01
#undef public_628da10
#undef public_628da1b
#undef public_628da2b
#undef public_628da46
#undef public_628da54
#undef public_628da57
