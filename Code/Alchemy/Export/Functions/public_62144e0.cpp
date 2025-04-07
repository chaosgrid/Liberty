#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62144e0);
CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_6214524 _public_6214524
#define public_6214535 _public_6214535
#define public_621453e _public_621453e
#define public_6214547 _public_6214547
#define public_621455f _public_621455f
#define public_6214576 _public_6214576
#define public_621458b _public_621458b

PROC_DECLARE(0x62144e0, internal_62144e0, public_62144e0);
extern "C" NAKED register_t __cdecl internal_62144e0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        je public_621455f
        mov edx, dword ptr ds : [ebx+0x3C]
        cmp esi, edx
        je public_621458b
        push edi
        mov edi, esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        mov eax, dword ptr ds : [ebx+0x44]
        not ecx
        dec ecx
        cmp ecx, eax
        mov dword ptr ds : [ebx+0x40], ecx
        jl public_6214547
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_6214524
        test edx, edx
        je public_6214524
        push edx
        call public_62460e0
        add esp, 4
        public_6214524 : nop
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x38], 1
        inc eax
        jne public_6214535
        xor eax, eax
        jmp public_621453e
        public_6214535 : nop
        push eax
        call public_624612c
        add esp, 4
        public_621453e : nop
        mov dword ptr ds : [ebx+0x3C], eax
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x44], eax
        public_6214547 : nop
        mov ecx, dword ptr ds : [ebx+0x40]
        mov edi, dword ptr ds : [ebx+0x3C]
        inc ecx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        jmp public_621458b
        public_621455f : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_6214576
        mov eax, dword ptr ds : [ebx+0x3C]
        test eax, eax
        je public_6214576
        push eax
        call public_62460e0
        add esp, 4
        public_6214576 : nop
        mov dword ptr ds : [ebx+0x3C], 0
        mov dword ptr ds : [ebx+0x44], 0
        mov dword ptr ds : [ebx+0x40], 0
        public_621458b : nop
        mov eax, dword ptr ds : [ebx+0x3C]
        push eax
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [ebx+0x30], eax
        xor eax, eax
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x62144e0)
    }
}

#undef public_6214524
#undef public_6214535
#undef public_621453e
#undef public_6214547
#undef public_621455f
#undef public_6214576
#undef public_621458b
