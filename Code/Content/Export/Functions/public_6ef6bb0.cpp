#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eae300);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2700);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2730);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ef6bef _public_6ef6bef
#define public_6ef6bf4 _public_6ef6bf4
#define public_6ef6bfc _public_6ef6bfc
#define public_6ef6c01 _public_6ef6c01
#define public_6ef6c0d _public_6ef6c0d
#define public_6ef6c30 _public_6ef6c30
#define public_6ef6c44 _public_6ef6c44
#define public_6ef6ca0 _public_6ef6ca0
#define public_6ef6ce1 _public_6ef6ce1
#define public_6ef6cf4 _public_6ef6cf4
#define public_6ef6d10 _public_6ef6d10
#define public_6ef6d25 _public_6ef6d25
#define public_6ef6d32 _public_6ef6d32
#define public_6ef6d43 _public_6ef6d43

PROC_DECLARE(0x6ef6bb0, internal_6ef6bb0, public_6ef6bb0);
extern "C" NAKED register_t __cdecl internal_6ef6bb0()
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
        jae public_6ef6ca0
        test edx, edx
        je public_6ef6bef
        mov ecx, eax
        sub ecx, edx
        sar ecx, 3
        cmp ecx, 1
        ja public_6ef6bf4
        public_6ef6bef : nop
        mov ecx, 1
        public_6ef6bf4 : nop
        test edx, edx
        jne public_6ef6bfc
        xor eax, eax
        jmp public_6ef6c01
        public_6ef6bfc : nop
        sub eax, edx
        sar eax, 3
        public_6ef6c01 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jge public_6ef6c0d
        xor eax, eax
        public_6ef6c0d : nop
        lea edx, ds:[eax*8]
        push edx
        call public_6fa912a
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        je public_6ef6c44
        lea ebx, ds:[ebx]
        public_6ef6c30 : nop
        push ebx
        push ebp
        call public_6f305b0
        add ebx, 8
        add esp, 8
        add ebp, 8
        cmp ebx, edi
        jne public_6ef6c30
        public_6ef6c44 : nop
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
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x20]
        lea ecx, ds:[edi+eax*8]
        mov dword ptr ds : [esi+0xC], ecx
        add esp, 4
        mov ecx, esi
        call public_6eae300
        mov ebp, dword ptr ss : [esp+0x14]
        lea edx, ds:[edi+eax*8+8]
        mov dword ptr ds : [esi+4], edi
        mov eax, edi
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        lea eax, ds:[eax+ebp*8]
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_6ef6ca0 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 3
        cmp ecx, 1
        mov ecx, esi
        jae public_6ef6cf4
        lea edx, ds:[edi+8]
        push edx
        push eax
        push edi
        call public_6ed2700
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ss : [esp+0x20]
        mov ecx, eax
        sub ecx, edi
        sar ecx, 3
        push ebx
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, esi
        call public_6ed2730
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_6ef6d43
        public_6ef6ce1 : nop
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [eax+4], edx
        add eax, 8
        cmp eax, ecx
        jne public_6ef6ce1
        jmp public_6ef6d43
        public_6ef6cf4 : nop
        push eax
        push eax
        add eax, 0xFFFFFFF8
        push eax
        call public_6ed2700
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-8]
        cmp edi, eax
        je public_6ef6d25
        lea esp, ss:[esp]
        public_6ef6d10 : nop
        mov edx, dword ptr ds : [eax-8]
        sub eax, 8
        sub ecx, 8
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        jne public_6ef6d10
        public_6ef6d25 : nop
        lea edx, ds:[edi+8]
        cmp edi, edx
        mov eax, edi
        je public_6ef6d43
        mov ecx, dword ptr ss : [esp+0x20]
        public_6ef6d32 : nop
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edi
        add eax, 8
        cmp eax, edx
        jne public_6ef6d32
        public_6ef6d43 : nop
        add dword ptr ds : [esi+8], 8
        mov eax, dword ptr ds : [esi+4]
        pop edi
        pop esi
        lea eax, ds:[eax+ebp*8]
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6ef6bb0)
    }
}

#undef public_6ef6bef
#undef public_6ef6bf4
#undef public_6ef6bfc
#undef public_6ef6c01
#undef public_6ef6c0d
#undef public_6ef6c30
#undef public_6ef6c44
#undef public_6ef6ca0
#undef public_6ef6ce1
#undef public_6ef6cf4
#undef public_6ef6d10
#undef public_6ef6d25
#undef public_6ef6d32
#undef public_6ef6d43
