#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eedfe0);
CLANG_FORWARD_PROC_SYMBOL(public_6eee010);
CLANG_FORWARD_PROC_SYMBOL(public_6eee050);
CLANG_FORWARD_PROC_SYMBOL(public_6f60dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ed6a59 _public_6ed6a59
#define public_6ed6a61 _public_6ed6a61
#define public_6ed6a70 _public_6ed6a70
#define public_6ed6a80 _public_6ed6a80
#define public_6ed6ab7 _public_6ed6ab7
#define public_6ed6ac3 _public_6ed6ac3
#define public_6ed6af3 _public_6ed6af3
#define public_6ed6b00 _public_6ed6b00
#define public_6ed6b0c _public_6ed6b0c
#define public_6ed6b36 _public_6ed6b36
#define public_6ed6b6a _public_6ed6b6a
#define public_6ed6b72 _public_6ed6b72
#define public_6ed6bf4 _public_6ed6bf4
#define public_6ed6bf9 _public_6ed6bf9
#define public_6ed6c0d _public_6ed6c0d
#define public_6ed6cb3 _public_6ed6cb3
#define public_6ed6d20 _public_6ed6d20
#define public_6ed6d36 _public_6ed6d36
#define public_6ed6d54 _public_6ed6d54
#define public_6ed6d69 _public_6ed6d69
#define public_6ed6d72 _public_6ed6d72
#define public_6ed6d86 _public_6ed6d86
#define public_6ed6d8d _public_6ed6d8d

PROC_DECLARE(0x6ed6a40, internal_6ed6a40, public_6ed6a40);
extern "C" NAKED register_t __cdecl internal_6ed6a40()
{
    __asm
    {
        sub esp, 0x90
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x18]
        xor ebp, ebp
        cmp eax, ebp
        push edi
        jne public_6ed6a59
        xor ecx, ecx
        jmp public_6ed6a61
        public_6ed6a59 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        sub ecx, eax
        sar ecx, 2
        public_6ed6a61 : nop
        xor eax, eax
        cmp ecx, ebp
        jle public_6ed6a80
        mov edx, dword ptr ds : [esi+0x18]
        lea edi, ss:[esp+0x60]
        sub edx, edi
        public_6ed6a70 : nop
        lea edi, ds:[edx+eax*4]
        mov edi, dword ptr ss : [esp+edi+0x60]
        mov dword ptr ss : [esp+eax*4+0x60], edi
        inc eax
        cmp eax, ecx
        jl public_6ed6a70
        public_6ed6a80 : nop
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebp
        je public_6ed6af3
        lea ecx, ss:[esp+0x2C]
        push ecx
        push eax
        mov dword ptr ss : [esp+0x34], ebp
        mov dword ptr ss : [esp+0x38], ebp
        mov dword ptr ss : [esp+0x3C], ebp
        mov dword ptr ss : [esp+0x40], ebp
        mov dword ptr ss : [esp+0x64], ebp
        call dword ptr ds : [public_6fb343c]
        mov eax, dword ptr ds : [esi+0x18]
        add esp, 8
        cmp eax, ebp
        jne public_6ed6ab7
        mov dword ptr ss : [esp+0x10], ebp
        jmp public_6ed6ac3
        public_6ed6ab7 : nop
        mov edx, dword ptr ds : [esi+0x1C]
        sub edx, eax
        sar edx, 2
        mov dword ptr ss : [esp+0x10], edx
        public_6ed6ac3 : nop
        mov eax, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [esi+0x2C]
        push 1
        push 0x3F000000
        push eax
        mov eax, dword ptr ds : [esi+0xC]
        lea ecx, ss:[esp+0x38]
        push ecx
        push edx
        push eax
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x7C]
        push edx
        mov edx, dword ptr ds : [esi+0x24]
        push eax
        push ecx
        push edx
        jmp public_6ed6b36
        public_6ed6af3 : nop
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, ebp
        jne public_6ed6b00
        mov dword ptr ss : [esp+0x10], ebp
        jmp public_6ed6b0c
        public_6ed6b00 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        sub ecx, eax
        sar ecx, 2
        mov dword ptr ss : [esp+0x10], ecx
        public_6ed6b0c : nop
        mov edx, dword ptr ds : [esi+0x28]
        mov eax, dword ptr ds : [esi+0x2C]
        mov ecx, dword ptr ds : [esi+0xC]
        push 1
        push 0x3F000000
        push edx
        push ebp
        push eax
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x28]
        push edx
        mov edx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x7C]
        push eax
        mov eax, dword ptr ds : [esi+0x24]
        push ecx
        push edx
        push eax
        public_6ed6b36 : nop
        call public_6f60dd0
        add esp, 0x2C
        call dword ptr ds : [public_6fb36a0]
        test al, al
        jne public_6ed6d8d
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        fadd dword ptr ds : [public_6fb621c]
        mov ecx, dword ptr ds : [esi+0x18]
        cmp ecx, ebp
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [eax+0x48]
        jne public_6ed6b6a
        xor eax, eax
        jmp public_6ed6b72
        public_6ed6b6a : nop
        mov eax, dword ptr ds : [esi+0x1C]
        sub eax, ecx
        sar eax, 2
        public_6ed6b72 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [ecx+eax*4-4]
        mov ecx, dword ptr ds : [public_6fd1c24]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ds : [public_6fd1c28]
        sub edx, ecx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov dword ptr ss : [esp+0x24], 0
        fstp dword ptr ss : [esp+0x28]
        mov ebx, ecx
        jae public_6ed6cb3
        mov eax, dword ptr ds : [public_6fd1c20]
        cmp eax, ebp
        je public_6ed6bf4
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edx, 1
        jbe public_6ed6bf4
        mov ecx, offset public_6fd1c1c
        call public_6eedfe0
        mov esi, eax
        jmp public_6ed6bf9
        public_6ed6bf4 : nop
        mov esi, 1
        public_6ed6bf9 : nop
        mov ecx, offset public_6fd1c1c
        call public_6eedfe0
        mov edi, eax
        add edi, esi
        mov eax, edi
        jns public_6ed6c0d
        xor eax, eax
        public_6ed6c0d : nop
        lea edx, ds:[eax+eax*2]
        shl edx, 3
        push edx
        call public_6fa912a
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ds : [public_6fd1c20]
        push esi
        push ebx
        push eax
        mov ecx, offset public_6fd1c1c
        call public_6eee010
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ebp, eax
        push 1
        push ebp
        mov ecx, offset public_6fd1c1c
        call public_6eee050
        mov edx, dword ptr ds : [public_6fd1c24]
        add ebp, 0x18
        push ebp
        push edx
        push ebx
        mov ecx, offset public_6fd1c1c
        call public_6eee010
        mov eax, dword ptr ds : [public_6fd1c24]
        mov ecx, dword ptr ds : [public_6fd1c20]
        push eax
        push ecx
        mov ecx, offset public_6fd1c1c
        call public_6ea1490
        mov edx, dword ptr ds : [public_6fd1c20]
        push edx
        call public_6fa8fe0
        lea eax, ds:[edi+edi*2]
        lea ecx, ds:[esi+eax*8]
        mov dword ptr ds : [public_6fd1c28], ecx
        add esp, 4
        mov ecx, offset public_6fd1c1c
        call public_6eedfe0
        inc eax
        pop edi
        lea edx, ds:[eax+eax*2]
        lea eax, ds:[esi+edx*8]
        mov dword ptr ds : [public_6fd1c20], esi
        pop esi
        pop ebp
        mov dword ptr ds : [public_6fd1c24], eax
        pop ebx
        add esp, 0x90
        ret 
        public_6ed6cb3 : nop
        mov edx, ecx
        sub edx, ebx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6ed6d36
        lea edx, ds:[ebx+0x18]
        push edx
        push ecx
        push ebx
        mov ecx, offset public_6fd1c1c
        call public_6eee010
        mov esi, dword ptr ds : [public_6fd1c24]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, 1
        sub eax, edx
        push eax
        push esi
        mov ecx, offset public_6fd1c1c
        call public_6eee050
        mov edx, dword ptr ds : [public_6fd1c24]
        cmp ebx, edx
        mov eax, ebx
        je public_6ed6d86
        lea esp, ss:[esp]
        public_6ed6d20 : nop
        mov edi, eax
        add eax, 0x18
        cmp eax, edx
        mov ecx, 6
        lea esi, ss:[esp+0x14]
        rep movsd
        jne public_6ed6d20
        jmp public_6ed6d86
        public_6ed6d36 : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFE8
        push ecx
        mov ecx, offset public_6fd1c1c
        call public_6eee010
        mov eax, dword ptr ds : [public_6fd1c24]
        mov edx, eax
        add eax, 0xFFFFFFE8
        cmp ebx, eax
        je public_6ed6d69
        public_6ed6d54 : nop
        sub eax, 0x18
        sub edx, 0x18
        cmp eax, ebx
        mov ecx, 6
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_6ed6d54
        public_6ed6d69 : nop
        lea edx, ds:[ebx+0x18]
        cmp ebx, edx
        mov eax, ebx
        je public_6ed6d86
        public_6ed6d72 : nop
        mov edi, eax
        add eax, 0x18
        cmp eax, edx
        mov ecx, 6
        lea esi, ss:[esp+0x14]
        rep movsd
        jne public_6ed6d72
        public_6ed6d86 : nop
        add dword ptr ds : [public_6fd1c24], 0x18
        public_6ed6d8d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x90
        ret 
        UNREACHABLE_TRAP(0x6ed6a40)
    }
}

#undef public_6ed6a59
#undef public_6ed6a61
#undef public_6ed6a70
#undef public_6ed6a80
#undef public_6ed6ab7
#undef public_6ed6ac3
#undef public_6ed6af3
#undef public_6ed6b00
#undef public_6ed6b0c
#undef public_6ed6b36
#undef public_6ed6b6a
#undef public_6ed6b72
#undef public_6ed6bf4
#undef public_6ed6bf9
#undef public_6ed6c0d
#undef public_6ed6cb3
#undef public_6ed6d20
#undef public_6ed6d36
#undef public_6ed6d54
#undef public_6ed6d69
#undef public_6ed6d72
#undef public_6ed6d86
#undef public_6ed6d8d
