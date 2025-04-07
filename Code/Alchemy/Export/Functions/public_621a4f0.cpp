#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a4f0);
CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_621a534 _public_621a534
#define public_621a545 _public_621a545
#define public_621a54e _public_621a54e
#define public_621a557 _public_621a557
#define public_621a56f _public_621a56f
#define public_621a586 _public_621a586
#define public_621a59b _public_621a59b

PROC_DECLARE(0x621a4f0, internal_621a4f0, public_621a4f0);
extern "C" NAKED register_t __cdecl internal_621a4f0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        je public_621a56f
        mov edx, dword ptr ds : [ebx+0x3C]
        cmp esi, edx
        je public_621a59b
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
        jl public_621a557
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_621a534
        test edx, edx
        je public_621a534
        push edx
        call public_62460e0
        add esp, 4
        public_621a534 : nop
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x38], 1
        inc eax
        jne public_621a545
        xor eax, eax
        jmp public_621a54e
        public_621a545 : nop
        push eax
        call public_624612c
        add esp, 4
        public_621a54e : nop
        mov dword ptr ds : [ebx+0x3C], eax
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x44], eax
        public_621a557 : nop
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
        jmp public_621a59b
        public_621a56f : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_621a586
        mov eax, dword ptr ds : [ebx+0x3C]
        test eax, eax
        je public_621a586
        push eax
        call public_62460e0
        add esp, 4
        public_621a586 : nop
        mov dword ptr ds : [ebx+0x3C], 0
        mov dword ptr ds : [ebx+0x44], 0
        mov dword ptr ds : [ebx+0x40], 0
        public_621a59b : nop
        mov eax, dword ptr ds : [ebx+0x3C]
        push eax
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [ebx+0x30], eax
        xor eax, eax
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x621a4f0)
    }
}

#undef public_621a534
#undef public_621a545
#undef public_621a54e
#undef public_621a557
#undef public_621a56f
#undef public_621a586
#undef public_621a59b
