#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eae300);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2700);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2730);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f537a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f537df _public_6f537df
#define public_6f537e4 _public_6f537e4
#define public_6f537ec _public_6f537ec
#define public_6f537f1 _public_6f537f1
#define public_6f537fd _public_6f537fd
#define public_6f53820 _public_6f53820
#define public_6f53834 _public_6f53834
#define public_6f5389f _public_6f5389f
#define public_6f538e0 _public_6f538e0
#define public_6f538f3 _public_6f538f3
#define public_6f53910 _public_6f53910
#define public_6f53925 _public_6f53925
#define public_6f53932 _public_6f53932
#define public_6f53943 _public_6f53943

PROC_DECLARE(0x6f537a0, internal_6f537a0, public_6f537a0);
extern "C" NAKED register_t __cdecl internal_6f537a0()
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
        sar ebp, 3
        sar ecx, 3
        cmp ecx, 1
        mov dword ptr ss : [esp+0x14], ebp
        jae public_6f5389f
        test edx, edx
        je public_6f537df
        mov ecx, eax
        sub ecx, edx
        sar ecx, 3
        cmp ecx, 1
        ja public_6f537e4
        public_6f537df : nop
        mov ecx, 1
        public_6f537e4 : nop
        test edx, edx
        jne public_6f537ec
        xor eax, eax
        jmp public_6f537f1
        public_6f537ec : nop
        sub eax, edx
        sar eax, 3
        public_6f537f1 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jge public_6f537fd
        xor eax, eax
        public_6f537fd : nop
        lea edx, ds:[eax*8]
        push edx
        call public_6fa912a
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        je public_6f53834
        lea ebx, ds:[ebx]
        public_6f53820 : nop
        push ebx
        push ebp
        call public_6f305b0
        add ebx, 8
        add esp, 8
        add ebp, 8
        cmp ebx, edi
        jne public_6f53820
        public_6f53834 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push ebp
        call public_6f305b0
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
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
        mov edi, dword ptr ss : [esp+0x20]
        lea eax, ds:[edi+edx*8]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6eae300
        mov ebp, dword ptr ss : [esp+0x14]
        lea ecx, ds:[edi+eax*8+8]
        mov dword ptr ds : [esi+4], edi
        mov eax, edi
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        lea eax, ds:[eax+ebp*8]
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_6f5389f : nop
        mov edx, eax
        sub edx, edi
        sar edx, 3
        cmp edx, 1
        jae public_6f538f3
        lea ecx, ds:[edi+8]
        push ecx
        push eax
        push edi
        mov ecx, esi
        call public_6ed2700
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, eax
        sub edx, edi
        sar edx, 3
        push ebx
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_6ed2730
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_6f53943
        public_6f538e0 : nop
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [eax+4], edx
        add eax, 8
        cmp eax, ecx
        jne public_6f538e0
        jmp public_6f53943
        public_6f538f3 : nop
        push eax
        push eax
        add eax, 0xFFFFFFF8
        push eax
        mov ecx, esi
        call public_6ed2700
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-8]
        cmp edi, eax
        je public_6f53925
        lea ebx, ds:[ebx]
        public_6f53910 : nop
        mov edx, dword ptr ds : [eax-8]
        sub eax, 8
        sub ecx, 8
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        jne public_6f53910
        public_6f53925 : nop
        lea edx, ds:[edi+8]
        cmp edi, edx
        mov eax, edi
        je public_6f53943
        mov ecx, dword ptr ss : [esp+0x20]
        public_6f53932 : nop
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edi
        add eax, 8
        cmp eax, edx
        jne public_6f53932
        public_6f53943 : nop
        add dword ptr ds : [esi+8], 8
        mov eax, dword ptr ds : [esi+4]
        pop edi
        pop esi
        lea eax, ds:[eax+ebp*8]
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6f537a0)
    }
}

#undef public_6f537df
#undef public_6f537e4
#undef public_6f537ec
#undef public_6f537f1
#undef public_6f537fd
#undef public_6f53820
#undef public_6f53834
#undef public_6f5389f
#undef public_6f538e0
#undef public_6f538f3
#undef public_6f53910
#undef public_6f53925
#undef public_6f53932
#undef public_6f53943
