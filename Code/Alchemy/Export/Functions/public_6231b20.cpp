#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6230960);
CLANG_FORWARD_PROC_SYMBOL(public_6231b20);
CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_623f9e0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_6231b73 _public_6231b73
#define public_6231b90 _public_6231b90
#define public_6231ba7 _public_6231ba7
#define public_6231bbc _public_6231bbc
#define public_6231bc5 _public_6231bc5
#define public_6231bdd _public_6231bdd
#define public_6231c35 _public_6231c35
#define public_6231c4c _public_6231c4c
#define public_6231c55 _public_6231c55
#define public_6231c67 _public_6231c67
#define public_6231c84 _public_6231c84
#define public_6231c9f _public_6231c9f
#define public_6231cb1 _public_6231cb1
#define public_6231ccf _public_6231ccf

PROC_DECLARE(0x6231b20, internal_6231b20, public_6231b20);
extern "C" NAKED register_t __cdecl internal_6231b20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        lea ebx, ds:[eax+4]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, 0xEC7A290
        push edi
        jne public_6231bdd
        mov esi, dword ptr ss : [esp+0x1C]
        xor ebp, ebp
        cmp esi, ebp
        je public_6231ba7
        mov edx, dword ptr ds : [ebx+0x6C]
        cmp esi, edx
        je public_6231bc5
        mov edi, esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        mov eax, dword ptr ds : [ebx+0x74]
        not ecx
        dec ecx
        cmp ecx, eax
        mov dword ptr ds : [ebx+0x70], ecx
        jl public_6231b90
        cmp dword ptr ds : [ebx+0x68], ebp
        je public_6231b73
        cmp edx, ebp
        je public_6231b73
        push edx
        call public_62460e0
        add esp, 4
        public_6231b73 : nop
        mov ecx, dword ptr ds : [ebx+0x70]
        mov dword ptr ds : [ebx+0x68], 1
        inc ecx
        push ecx
        call public_6230960
        mov edx, dword ptr ds : [ebx+0x70]
        add esp, 4
        mov dword ptr ds : [ebx+0x6C], eax
        mov dword ptr ds : [ebx+0x74], edx
        public_6231b90 : nop
        mov ecx, dword ptr ds : [ebx+0x70]
        mov edi, dword ptr ds : [ebx+0x6C]
        inc ecx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        jmp public_6231bc5
        public_6231ba7 : nop
        cmp dword ptr ds : [ebx+0x68], ebp
        je public_6231bbc
        mov eax, dword ptr ds : [ebx+0x6C]
        cmp eax, ebp
        je public_6231bbc
        push eax
        call public_62460e0
        add esp, 4
        public_6231bbc : nop
        mov dword ptr ds : [ebx+0x6C], ebp
        mov dword ptr ds : [ebx+0x74], ebp
        mov dword ptr ds : [ebx+0x70], ebp
        public_6231bc5 : nop
        mov eax, dword ptr ds : [ebx+0x6C]
        push eax
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [ebx+0x60], eax
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6231bdd : nop
        cmp eax, 0x3B76E6C
        jne public_6231ccf
        mov esi, dword ptr ss : [esp+0x1C]
        xor ebp, ebp
        cmp esi, ebp
        je public_6231c84
        mov edx, dword ptr ds : [ebx+0x8C]
        cmp esi, edx
        je public_6231cb1
        mov edi, esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        mov eax, dword ptr ds : [ebx+0x94]
        not ecx
        dec ecx
        cmp ecx, eax
        mov dword ptr ds : [ebx+0x90], ecx
        jl public_6231c67
        cmp dword ptr ds : [ebx+0x88], ebp
        je public_6231c35
        cmp edx, ebp
        je public_6231c35
        push edx
        call public_62460e0
        add esp, 4
        public_6231c35 : nop
        mov eax, dword ptr ds : [ebx+0x90]
        mov dword ptr ds : [ebx+0x88], 1
        inc eax
        jne public_6231c4c
        xor eax, eax
        jmp public_6231c55
        public_6231c4c : nop
        push eax
        call public_624612c
        add esp, 4
        public_6231c55 : nop
        mov ecx, dword ptr ds : [ebx+0x90]
        mov dword ptr ds : [ebx+0x8C], eax
        mov dword ptr ds : [ebx+0x94], ecx
        public_6231c67 : nop
        mov ecx, dword ptr ds : [ebx+0x90]
        mov edi, dword ptr ds : [ebx+0x8C]
        inc ecx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        jmp public_6231cb1
        public_6231c84 : nop
        cmp dword ptr ds : [ebx+0x88], ebp
        je public_6231c9f
        mov eax, dword ptr ds : [ebx+0x8C]
        cmp eax, ebp
        je public_6231c9f
        push eax
        call public_62460e0
        add esp, 4
        public_6231c9f : nop
        mov dword ptr ds : [ebx+0x8C], ebp
        mov dword ptr ds : [ebx+0x94], ebp
        mov dword ptr ds : [ebx+0x90], ebp
        public_6231cb1 : nop
        mov eax, dword ptr ds : [ebx+0x8C]
        push eax
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [ebx+0x80], eax
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6231ccf : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push eax
        push ebx
        call public_623f9e0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6231b20)
    }
}

#undef public_6231b73
#undef public_6231b90
#undef public_6231ba7
#undef public_6231bbc
#undef public_6231bc5
#undef public_6231bdd
#undef public_6231c35
#undef public_6231c4c
#undef public_6231c55
#undef public_6231c67
#undef public_6231c84
#undef public_6231c9f
#undef public_6231cb1
#undef public_6231ccf
