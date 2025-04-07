#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62133b0);
CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_62133f4 _public_62133f4
#define public_6213405 _public_6213405
#define public_621340e _public_621340e
#define public_6213417 _public_6213417
#define public_621342f _public_621342f
#define public_6213446 _public_6213446
#define public_621345b _public_621345b

PROC_DECLARE(0x62133b0, internal_62133b0, public_62133b0);
extern "C" NAKED register_t __cdecl internal_62133b0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        je public_621342f
        mov edx, dword ptr ds : [ebx+0x3C]
        cmp esi, edx
        je public_621345b
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
        jl public_6213417
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_62133f4
        test edx, edx
        je public_62133f4
        push edx
        call public_62460e0
        add esp, 4
        public_62133f4 : nop
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x38], 1
        inc eax
        jne public_6213405
        xor eax, eax
        jmp public_621340e
        public_6213405 : nop
        push eax
        call public_624612c
        add esp, 4
        public_621340e : nop
        mov dword ptr ds : [ebx+0x3C], eax
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x44], eax
        public_6213417 : nop
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
        jmp public_621345b
        public_621342f : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_6213446
        mov eax, dword ptr ds : [ebx+0x3C]
        test eax, eax
        je public_6213446
        push eax
        call public_62460e0
        add esp, 4
        public_6213446 : nop
        mov dword ptr ds : [ebx+0x3C], 0
        mov dword ptr ds : [ebx+0x44], 0
        mov dword ptr ds : [ebx+0x40], 0
        public_621345b : nop
        mov eax, dword ptr ds : [ebx+0x3C]
        push eax
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [ebx+0x30], eax
        xor eax, eax
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x62133b0)
    }
}

#undef public_62133f4
#undef public_6213405
#undef public_621340e
#undef public_6213417
#undef public_621342f
#undef public_6213446
#undef public_621345b
