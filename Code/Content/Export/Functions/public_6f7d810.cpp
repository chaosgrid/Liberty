#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eae300);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2700);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7d810);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7d828 _public_6f7d828
#define public_6f7d83b _public_6f7d83b
#define public_6f7d843 _public_6f7d843
#define public_6f7d84e _public_6f7d84e
#define public_6f7d856 _public_6f7d856
#define public_6f7d863 _public_6f7d863
#define public_6f7d877 _public_6f7d877
#define public_6f7d88e _public_6f7d88e
#define public_6f7d8a4 _public_6f7d8a4
#define public_6f7d8ac _public_6f7d8ac
#define public_6f7d8b4 _public_6f7d8b4
#define public_6f7d8bc _public_6f7d8bc
#define public_6f7d8c4 _public_6f7d8c4
#define public_6f7d8d0 _public_6f7d8d0
#define public_6f7d8d8 _public_6f7d8d8
#define public_6f7d8e0 _public_6f7d8e0
#define public_6f7d8f4 _public_6f7d8f4
#define public_6f7d904 _public_6f7d904
#define public_6f7d91c _public_6f7d91c
#define public_6f7d934 _public_6f7d934
#define public_6f7d94a _public_6f7d94a
#define public_6f7d96f _public_6f7d96f
#define public_6f7d987 _public_6f7d987

PROC_DECLARE(0x6f7d810, internal_6f7d810, public_6f7d810);
extern "C" NAKED register_t __cdecl internal_6f7d810()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+8]
        cmp edi, eax
        je public_6f7d987
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        public_6f7d828 : nop
        cmp edi, ebp
        je public_6f7d96f
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_6f7d83b
        xor esi, esi
        jmp public_6f7d843
        public_6f7d83b : nop
        mov esi, dword ptr ss : [ebp+8]
        sub esi, eax
        sar esi, 3
        public_6f7d843 : nop
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        jne public_6f7d84e
        xor ecx, ecx
        jmp public_6f7d856
        public_6f7d84e : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, edx
        sar ecx, 3
        public_6f7d856 : nop
        cmp esi, ecx
        ja public_6f7d8a4
        mov esi, dword ptr ss : [ebp+8]
        cmp eax, esi
        mov ecx, edx
        je public_6f7d877
        public_6f7d863 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        add eax, 8
        add ecx, 8
        cmp eax, esi
        jne public_6f7d863
        public_6f7d877 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        jne public_6f7d88e
        mov ecx, dword ptr ds : [edi+4]
        xor eax, eax
        lea edx, ds:[ecx+eax*8]
        mov dword ptr ds : [edi+8], edx
        jmp public_6f7d96f
        public_6f7d88e : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        mov ecx, dword ptr ds : [edi+4]
        sar eax, 3
        lea edx, ds:[ecx+eax*8]
        mov dword ptr ds : [edi+8], edx
        jmp public_6f7d96f
        public_6f7d8a4 : nop
        test eax, eax
        jne public_6f7d8ac
        xor esi, esi
        jmp public_6f7d8b4
        public_6f7d8ac : nop
        mov esi, dword ptr ss : [ebp+8]
        sub esi, eax
        sar esi, 3
        public_6f7d8b4 : nop
        test edx, edx
        jne public_6f7d8bc
        xor ecx, ecx
        jmp public_6f7d8c4
        public_6f7d8bc : nop
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, edx
        sar ecx, 3
        public_6f7d8c4 : nop
        cmp esi, ecx
        ja public_6f7d934
        test edx, edx
        jne public_6f7d8d0
        xor ecx, ecx
        jmp public_6f7d8d8
        public_6f7d8d0 : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, edx
        sar ecx, 3
        public_6f7d8d8 : nop
        lea ecx, ds:[eax+ecx*8]
        cmp eax, ecx
        je public_6f7d8f4
        nop 
        public_6f7d8e0 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], esi
        add eax, 8
        add edx, 8
        cmp eax, ecx
        jne public_6f7d8e0
        public_6f7d8f4 : nop
        mov eax, dword ptr ss : [ebp+8]
        cmp ecx, eax
        mov ebx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x14], eax
        mov esi, ecx
        je public_6f7d91c
        public_6f7d904 : nop
        push esi
        push ebx
        call public_6f305b0
        mov eax, dword ptr ss : [esp+0x1C]
        add esi, 8
        add esp, 8
        add ebx, 8
        cmp esi, eax
        jne public_6f7d904
        public_6f7d91c : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        jne public_6f7d88e
        mov ecx, dword ptr ds : [edi+4]
        xor eax, eax
        lea edx, ds:[ecx+eax*8]
        mov dword ptr ds : [edi+8], edx
        jmp public_6f7d96f
        public_6f7d934 : nop
        push edx
        call public_6fa8fe0
        add esp, 4
        mov ecx, ebp
        call public_6eae300
        test eax, eax
        jge public_6f7d94a
        xor eax, eax
        public_6f7d94a : nop
        shl eax, 3
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+4]
        push eax
        push ecx
        push edx
        mov ecx, edi
        call public_6ed2700
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        public_6f7d96f : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edi+0x10], ecx
        add edi, 0x14
        cmp edi, eax
        jne public_6f7d828
        pop esi
        pop ebp
        pop ebx
        public_6f7d987 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6f7d810)
    }
}

#undef public_6f7d828
#undef public_6f7d83b
#undef public_6f7d843
#undef public_6f7d84e
#undef public_6f7d856
#undef public_6f7d863
#undef public_6f7d877
#undef public_6f7d88e
#undef public_6f7d8a4
#undef public_6f7d8ac
#undef public_6f7d8b4
#undef public_6f7d8bc
#undef public_6f7d8c4
#undef public_6f7d8d0
#undef public_6f7d8d8
#undef public_6f7d8e0
#undef public_6f7d8f4
#undef public_6f7d904
#undef public_6f7d91c
#undef public_6f7d934
#undef public_6f7d94a
#undef public_6f7d96f
#undef public_6f7d987
