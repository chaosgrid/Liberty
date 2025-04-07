#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa4a60);
CLANG_FORWARD_PROC_SYMBOL(public_6fa5010);
CLANG_FORWARD_PROC_SYMBOL(public_6fa5d90);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa5db4 _public_6fa5db4
#define public_6fa5dd0 _public_6fa5dd0
#define public_6fa5ddb _public_6fa5ddb
#define public_6fa5df3 _public_6fa5df3
#define public_6fa5e06 _public_6fa5e06
#define public_6fa5e1e _public_6fa5e1e
#define public_6fa5e30 _public_6fa5e30
#define public_6fa5e46 _public_6fa5e46
#define public_6fa5e63 _public_6fa5e63
#define public_6fa5e7b _public_6fa5e7b
#define public_6fa5e7f _public_6fa5e7f
#define public_6fa5e95 _public_6fa5e95
#define public_6fa5e9f _public_6fa5e9f
#define public_6fa5ebb _public_6fa5ebb
#define public_6fa5ec3 _public_6fa5ec3
#define public_6fa5edb _public_6fa5edb
#define public_6fa5eed _public_6fa5eed
#define public_6fa5f05 _public_6fa5f05
#define public_6fa5f15 _public_6fa5f15
#define public_6fa5f2d _public_6fa5f2d
#define public_6fa5f41 _public_6fa5f41
#define public_6fa5f63 _public_6fa5f63
#define public_6fa5f8b _public_6fa5f8b
#define public_6fa5f94 _public_6fa5f94
#define public_6fa5fa6 _public_6fa5fa6
#define public_6fa5fbd _public_6fa5fbd
#define public_6fa5fd5 _public_6fa5fd5
#define public_6fa5fdd _public_6fa5fdd
#define public_6fa6000 _public_6fa6000
#define public_6fa601a _public_6fa601a
#define public_6fa602c _public_6fa602c

PROC_DECLARE(0x6fa5d90, internal_6fa5d90, public_6fa5d90);
extern "C" NAKED register_t __cdecl internal_6fa5d90()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov ebx, ecx
        cmp ebx, ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        je public_6fa602c
        mov esi, dword ptr ss : [ebp+4]
        test esi, esi
        jne public_6fa5db4
        mov dword ptr ss : [esp+0x18], esi
        jmp public_6fa5dd0
        public_6fa5db4 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, esi
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x18], edx
        public_6fa5dd0 : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_6fa5ddb
        xor edx, edx
        jmp public_6fa5df3
        public_6fa5ddb : nop
        mov edi, dword ptr ds : [ebx+8]
        sub edi, ecx
        mov eax, 0x88888889
        imul edi
        add edx, edi
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa5df3 : nop
        cmp dword ptr ss : [esp+0x18], edx
        ja public_6fa5e95
        mov ebx, dword ptr ss : [ebp+8]
        cmp esi, ebx
        mov edi, ecx
        je public_6fa5e1e
        public_6fa5e06 : nop
        push esi
        mov ecx, edi
        call public_6fa5010
        add esi, 0xF0
        add edi, 0xF0
        cmp esi, ebx
        jne public_6fa5e06
        public_6fa5e1e : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [eax+8]
        cmp edi, ebx
        mov esi, edi
        je public_6fa5e46
        nop 
        lea esp, ss:[esp]
        public_6fa5e30 : nop
        mov edx, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [edx]
        add esi, 0xF0
        cmp esi, ebx
        jne public_6fa5e30
        mov eax, dword ptr ss : [esp+0x10]
        public_6fa5e46 : nop
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        jne public_6fa5e63
        mov ecx, dword ptr ds : [eax+4]
        imul edx, 0xF0
        pop edi
        pop esi
        add edx, ecx
        pop ebp
        mov dword ptr ds : [eax+8], edx
        pop ebx
        pop ecx
        ret 4
        public_6fa5e63 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa5e7b : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_6fa5e7f : nop
        mov ecx, dword ptr ds : [eax+4]
        imul edx, 0xF0
        pop edi
        pop esi
        add edx, ecx
        pop ebp
        mov dword ptr ds : [eax+8], edx
        pop ebx
        pop ecx
        ret 4
        public_6fa5e95 : nop
        test esi, esi
        jne public_6fa5e9f
        mov dword ptr ss : [esp+0x18], esi
        jmp public_6fa5ebb
        public_6fa5e9f : nop
        mov edi, dword ptr ss : [ebp+8]
        sub edi, esi
        mov eax, 0x88888889
        imul edi
        add edx, edi
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x18], edx
        public_6fa5ebb : nop
        test ecx, ecx
        jne public_6fa5ec3
        xor edx, edx
        jmp public_6fa5edb
        public_6fa5ec3 : nop
        mov edi, dword ptr ds : [ebx+0xC]
        sub edi, ecx
        mov eax, 0x88888889
        imul edi
        add edx, edi
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa5edb : nop
        cmp dword ptr ss : [esp+0x18], edx
        ja public_6fa5f8b
        test ecx, ecx
        jne public_6fa5eed
        xor edx, edx
        jmp public_6fa5f05
        public_6fa5eed : nop
        mov edi, dword ptr ds : [ebx+8]
        sub edi, ecx
        mov eax, 0x88888889
        imul edi
        add edx, edi
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa5f05 : nop
        imul edx, 0xF0
        add edx, esi
        mov edi, edx
        cmp esi, edi
        mov ebx, ecx
        je public_6fa5f2d
        public_6fa5f15 : nop
        push esi
        mov ecx, ebx
        call public_6fa5010
        add esi, 0xF0
        add ebx, 0xF0
        cmp esi, edi
        jne public_6fa5f15
        public_6fa5f2d : nop
        mov ecx, dword ptr ss : [ebp+8]
        cmp edi, ecx
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], ecx
        mov esi, edi
        je public_6fa5f63
        public_6fa5f41 : nop
        push esi
        push ebx
        call public_6fa4a60
        mov eax, dword ptr ss : [esp+0x20]
        add esi, 0xF0
        add esp, 8
        add ebx, 0xF0
        cmp esi, eax
        jne public_6fa5f41
        mov eax, dword ptr ss : [esp+0x10]
        public_6fa5f63 : nop
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        je public_6fa5e7f
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 7
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        jmp public_6fa5e7b
        public_6fa5f8b : nop
        mov edi, dword ptr ds : [ebx+8]
        mov esi, ecx
        cmp esi, edi
        je public_6fa5fa6
        public_6fa5f94 : nop
        mov edx, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [edx]
        add esi, 0xF0
        cmp esi, edi
        jne public_6fa5f94
        public_6fa5fa6 : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [ebp+4]
        add esp, 4
        test eax, eax
        jne public_6fa5fbd
        xor edx, edx
        jmp public_6fa5fd5
        public_6fa5fbd : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, eax
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 7
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6fa5fd5 : nop
        test edx, edx
        mov eax, edx
        jge public_6fa5fdd
        xor eax, eax
        public_6fa5fdd : nop
        imul eax, 0xF0
        push eax
        call public_6fa912a
        mov dword ptr ds : [ebx+4], eax
        mov ebx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ss : [ebp+4]
        add esp, 4
        cmp esi, ebx
        mov edi, eax
        je public_6fa601a
        nop 
        lea esp, ss:[esp]
        public_6fa6000 : nop
        push esi
        push edi
        call public_6fa4a60
        add esi, 0xF0
        add esp, 8
        add edi, 0xF0
        cmp esi, ebx
        jne public_6fa6000
        public_6fa601a : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], edi
        mov dword ptr ds : [eax+0xC], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6fa602c : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6fa5d90)
    }
}

#undef public_6fa5db4
#undef public_6fa5dd0
#undef public_6fa5ddb
#undef public_6fa5df3
#undef public_6fa5e06
#undef public_6fa5e1e
#undef public_6fa5e30
#undef public_6fa5e46
#undef public_6fa5e63
#undef public_6fa5e7b
#undef public_6fa5e7f
#undef public_6fa5e95
#undef public_6fa5e9f
#undef public_6fa5ebb
#undef public_6fa5ec3
#undef public_6fa5edb
#undef public_6fa5eed
#undef public_6fa5f05
#undef public_6fa5f15
#undef public_6fa5f2d
#undef public_6fa5f41
#undef public_6fa5f63
#undef public_6fa5f8b
#undef public_6fa5f94
#undef public_6fa5fa6
#undef public_6fa5fbd
#undef public_6fa5fd5
#undef public_6fa5fdd
#undef public_6fa6000
#undef public_6fa601a
#undef public_6fa602c
