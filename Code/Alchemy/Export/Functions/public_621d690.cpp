#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621d690);
CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_621d6d4 _public_621d6d4
#define public_621d6e5 _public_621d6e5
#define public_621d6ee _public_621d6ee
#define public_621d6f7 _public_621d6f7
#define public_621d70f _public_621d70f
#define public_621d726 _public_621d726
#define public_621d73b _public_621d73b

PROC_DECLARE(0x621d690, internal_621d690, public_621d690);
extern "C" NAKED register_t __cdecl internal_621d690()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        je public_621d70f
        mov edx, dword ptr ds : [ebx+0x3C]
        cmp esi, edx
        je public_621d73b
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
        jl public_621d6f7
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_621d6d4
        test edx, edx
        je public_621d6d4
        push edx
        call public_62460e0
        add esp, 4
        public_621d6d4 : nop
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x38], 1
        inc eax
        jne public_621d6e5
        xor eax, eax
        jmp public_621d6ee
        public_621d6e5 : nop
        push eax
        call public_624612c
        add esp, 4
        public_621d6ee : nop
        mov dword ptr ds : [ebx+0x3C], eax
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x44], eax
        public_621d6f7 : nop
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
        jmp public_621d73b
        public_621d70f : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_621d726
        mov eax, dword ptr ds : [ebx+0x3C]
        test eax, eax
        je public_621d726
        push eax
        call public_62460e0
        add esp, 4
        public_621d726 : nop
        mov dword ptr ds : [ebx+0x3C], 0
        mov dword ptr ds : [ebx+0x44], 0
        mov dword ptr ds : [ebx+0x40], 0
        public_621d73b : nop
        mov eax, dword ptr ds : [ebx+0x3C]
        push eax
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [ebx+0x30], eax
        xor eax, eax
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x621d690)
    }
}

#undef public_621d6d4
#undef public_621d6e5
#undef public_621d6ee
#undef public_621d6f7
#undef public_621d70f
#undef public_621d726
#undef public_621d73b
