#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6211cf0);
CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_6211d34 _public_6211d34
#define public_6211d45 _public_6211d45
#define public_6211d4e _public_6211d4e
#define public_6211d57 _public_6211d57
#define public_6211d6f _public_6211d6f
#define public_6211d86 _public_6211d86
#define public_6211d9b _public_6211d9b

PROC_DECLARE(0x6211cf0, internal_6211cf0, public_6211cf0);
extern "C" NAKED register_t __cdecl internal_6211cf0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        je public_6211d6f
        mov edx, dword ptr ds : [ebx+0x3C]
        cmp esi, edx
        je public_6211d9b
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
        jl public_6211d57
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_6211d34
        test edx, edx
        je public_6211d34
        push edx
        call public_62460e0
        add esp, 4
        public_6211d34 : nop
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x38], 1
        inc eax
        jne public_6211d45
        xor eax, eax
        jmp public_6211d4e
        public_6211d45 : nop
        push eax
        call public_624612c
        add esp, 4
        public_6211d4e : nop
        mov dword ptr ds : [ebx+0x3C], eax
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x44], eax
        public_6211d57 : nop
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
        jmp public_6211d9b
        public_6211d6f : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_6211d86
        mov eax, dword ptr ds : [ebx+0x3C]
        test eax, eax
        je public_6211d86
        push eax
        call public_62460e0
        add esp, 4
        public_6211d86 : nop
        mov dword ptr ds : [ebx+0x3C], 0
        mov dword ptr ds : [ebx+0x44], 0
        mov dword ptr ds : [ebx+0x40], 0
        public_6211d9b : nop
        mov eax, dword ptr ds : [ebx+0x3C]
        push eax
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [ebx+0x30], eax
        xor eax, eax
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6211cf0)
    }
}

#undef public_6211d34
#undef public_6211d45
#undef public_6211d4e
#undef public_6211d57
#undef public_6211d6f
#undef public_6211d86
#undef public_6211d9b
