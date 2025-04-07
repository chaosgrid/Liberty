#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_623f9e0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_62249b3 _public_62249b3
#define public_62249c4 _public_62249c4
#define public_62249cd _public_62249cd
#define public_62249d6 _public_62249d6
#define public_62249ee _public_62249ee
#define public_6224a05 _public_6224a05
#define public_6224a1a _public_6224a1a
#define public_6224a30 _public_6224a30

PROC_DECLARE(0x6224960, internal_6224960, public_6224960);
extern "C" NAKED register_t __cdecl internal_6224960()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x18DADCA8
        jne public_6224a30
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        test esi, esi
        je public_62249ee
        mov edx, dword ptr ds : [ebx+0x70]
        cmp esi, edx
        je public_6224a1a
        push edi
        mov edi, esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        mov eax, dword ptr ds : [ebx+0x78]
        not ecx
        dec ecx
        cmp ecx, eax
        mov dword ptr ds : [ebx+0x74], ecx
        jl public_62249d6
        mov eax, dword ptr ds : [ebx+0x6C]
        test eax, eax
        je public_62249b3
        test edx, edx
        je public_62249b3
        push edx
        call public_62460e0
        add esp, 4
        public_62249b3 : nop
        mov eax, dword ptr ds : [ebx+0x74]
        mov dword ptr ds : [ebx+0x6C], 1
        inc eax
        jne public_62249c4
        xor eax, eax
        jmp public_62249cd
        public_62249c4 : nop
        push eax
        call public_624612c
        add esp, 4
        public_62249cd : nop
        mov dword ptr ds : [ebx+0x70], eax
        mov eax, dword ptr ds : [ebx+0x74]
        mov dword ptr ds : [ebx+0x78], eax
        public_62249d6 : nop
        mov ecx, dword ptr ds : [ebx+0x74]
        mov edi, dword ptr ds : [ebx+0x70]
        inc ecx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        jmp public_6224a1a
        public_62249ee : nop
        mov eax, dword ptr ds : [ebx+0x6C]
        test eax, eax
        je public_6224a05
        mov eax, dword ptr ds : [ebx+0x70]
        test eax, eax
        je public_6224a05
        push eax
        call public_62460e0
        add esp, 4
        public_6224a05 : nop
        mov dword ptr ds : [ebx+0x70], 0
        mov dword ptr ds : [ebx+0x78], 0
        mov dword ptr ds : [ebx+0x74], 0
        public_6224a1a : nop
        mov eax, dword ptr ds : [ebx+0x70]
        push eax
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [ebx+0x64], eax
        xor eax, eax
        pop esi
        pop ebx
        ret 0xC
        public_6224a30 : nop
        mov dword ptr ss : [esp+8], eax
        jmp public_623f9e0
        UNREACHABLE_TRAP(0x6224960)
    }
}

#undef public_62249b3
#undef public_62249c4
#undef public_62249cd
#undef public_62249d6
#undef public_62249ee
#undef public_6224a05
#undef public_6224a1a
#undef public_6224a30
