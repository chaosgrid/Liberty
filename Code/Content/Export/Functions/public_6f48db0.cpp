#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eae300);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2700);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2730);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f48db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f48dd0 _public_6f48dd0
#define public_6f48ddd _public_6f48ddd
#define public_6f48ddf _public_6f48ddf
#define public_6f48e25 _public_6f48e25
#define public_6f48e2a _public_6f48e2a
#define public_6f48e32 _public_6f48e32
#define public_6f48e37 _public_6f48e37
#define public_6f48e43 _public_6f48e43
#define public_6f48e61 _public_6f48e61
#define public_6f48e75 _public_6f48e75
#define public_6f48ed8 _public_6f48ed8
#define public_6f48f17 _public_6f48f17
#define public_6f48f2b _public_6f48f2b
#define public_6f48f3d _public_6f48f3d
#define public_6f48f54 _public_6f48f54
#define public_6f48f69 _public_6f48f69
#define public_6f48f72 _public_6f48f72
#define public_6f48f86 _public_6f48f86
#define public_6f48f98 _public_6f48f98

PROC_DECLARE(0x6f48db0, internal_6f48db0, public_6f48db0);
extern "C" NAKED register_t __cdecl internal_6f48db0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x104]
        mov eax, dword ptr ds : [ecx+0x100]
        sub esp, 0xC
        cmp eax, edx
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, edx
        je public_6f48ddf
        lea esp, ss:[esp]
        public_6f48dd0 : nop
        cmp dword ptr ds : [eax], edi
        je public_6f48ddd
        add eax, 8
        cmp eax, edx
        jne public_6f48dd0
        jmp public_6f48ddf
        public_6f48ddd : nop
        mov esi, eax
        public_6f48ddf : nop
        cmp esi, edx
        jne public_6f48f98
        mov eax, dword ptr ds : [ecx+0x104]
        lea esi, ds:[ecx+0xFC]
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 3
        cmp ecx, 1
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x14], 1
        mov edi, eax
        jae public_6f48ed8
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_6f48e25
        mov ecx, eax
        sub ecx, edx
        sar ecx, 3
        cmp ecx, 1
        ja public_6f48e2a
        public_6f48e25 : nop
        mov ecx, 1
        public_6f48e2a : nop
        test edx, edx
        jne public_6f48e32
        xor eax, eax
        jmp public_6f48e37
        public_6f48e32 : nop
        sub eax, edx
        sar eax, 3
        public_6f48e37 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0xC], eax
        jge public_6f48e43
        xor eax, eax
        public_6f48e43 : nop
        lea edx, ds:[eax*8]
        push ebp
        push edx
        call public_6fa912a
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x20], eax
        mov ebp, eax
        je public_6f48e75
        public_6f48e61 : nop
        push ebx
        push ebp
        call public_6f305b0
        add ebx, 8
        add esp, 8
        add ebp, 8
        cmp ebx, edi
        jne public_6f48e61
        public_6f48e75 : nop
        lea eax, ss:[esp+0x14]
        push eax
        push 1
        push ebp
        mov ecx, esi
        call public_6ed2730
        mov ecx, dword ptr ds : [esi+8]
        add ebp, 8
        push ebp
        push ecx
        push edi
        mov ecx, esi
        call public_6ed2700
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_6ea1490
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x24]
        lea eax, ds:[edi+edx*8]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6eae300
        pop ebp
        lea ecx, ds:[edi+eax*8+8]
        mov dword ptr ds : [esi+4], edi
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebx
        add esp, 0xC
        ret 4
        public_6f48ed8 : nop
        mov edx, eax
        sub edx, edi
        sar edx, 3
        cmp edx, 1
        jae public_6f48f3d
        lea ecx, ds:[edi+8]
        push ecx
        push eax
        push edi
        mov ecx, esi
        call public_6ed2700
        mov eax, dword ptr ds : [esi+8]
        mov ecx, eax
        lea edx, ss:[esp+0x10]
        push edx
        sub ecx, edi
        sar ecx, 3
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, esi
        call public_6ed2730
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_6f48f2b
        public_6f48f17 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+4], edx
        add edi, 8
        cmp edi, eax
        jne public_6f48f17
        public_6f48f2b : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 8
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        add esp, 0xC
        ret 4
        public_6f48f3d : nop
        push eax
        push eax
        add eax, 0xFFFFFFF8
        push eax
        mov ecx, esi
        call public_6ed2700
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-8]
        cmp edi, eax
        je public_6f48f69
        public_6f48f54 : nop
        mov edx, dword ptr ds : [eax-8]
        sub eax, 8
        sub ecx, 8
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        jne public_6f48f54
        public_6f48f69 : nop
        lea ecx, ds:[edi+8]
        cmp edi, ecx
        mov eax, edi
        je public_6f48f86
        public_6f48f72 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        add eax, 8
        cmp eax, ecx
        jne public_6f48f72
        public_6f48f86 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 8
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        add esp, 0xC
        ret 4
        public_6f48f98 : nop
        mov eax, dword ptr ds : [esi+4]
        inc eax
        pop edi
        mov dword ptr ds : [esi+4], eax
        pop esi
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6f48db0)
    }
}

#undef public_6f48dd0
#undef public_6f48ddd
#undef public_6f48ddf
#undef public_6f48e25
#undef public_6f48e2a
#undef public_6f48e32
#undef public_6f48e37
#undef public_6f48e43
#undef public_6f48e61
#undef public_6f48e75
#undef public_6f48ed8
#undef public_6f48f17
#undef public_6f48f2b
#undef public_6f48f3d
#undef public_6f48f54
#undef public_6f48f69
#undef public_6f48f72
#undef public_6f48f86
#undef public_6f48f98
