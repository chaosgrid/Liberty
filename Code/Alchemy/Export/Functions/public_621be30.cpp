#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621be30);
CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_621be74 _public_621be74
#define public_621be85 _public_621be85
#define public_621be8e _public_621be8e
#define public_621be97 _public_621be97
#define public_621beaf _public_621beaf
#define public_621bec6 _public_621bec6
#define public_621bedb _public_621bedb

PROC_DECLARE(0x621be30, internal_621be30, public_621be30);
extern "C" NAKED register_t __cdecl internal_621be30()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        je public_621beaf
        mov edx, dword ptr ds : [ebx+0x3C]
        cmp esi, edx
        je public_621bedb
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
        jl public_621be97
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_621be74
        test edx, edx
        je public_621be74
        push edx
        call public_62460e0
        add esp, 4
        public_621be74 : nop
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x38], 1
        inc eax
        jne public_621be85
        xor eax, eax
        jmp public_621be8e
        public_621be85 : nop
        push eax
        call public_624612c
        add esp, 4
        public_621be8e : nop
        mov dword ptr ds : [ebx+0x3C], eax
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x44], eax
        public_621be97 : nop
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
        jmp public_621bedb
        public_621beaf : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_621bec6
        mov eax, dword ptr ds : [ebx+0x3C]
        test eax, eax
        je public_621bec6
        push eax
        call public_62460e0
        add esp, 4
        public_621bec6 : nop
        mov dword ptr ds : [ebx+0x3C], 0
        mov dword ptr ds : [ebx+0x44], 0
        mov dword ptr ds : [ebx+0x40], 0
        public_621bedb : nop
        mov eax, dword ptr ds : [ebx+0x3C]
        push eax
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [ebx+0x30], eax
        xor eax, eax
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x621be30)
    }
}

#undef public_621be74
#undef public_621be85
#undef public_621be8e
#undef public_621be97
#undef public_621beaf
#undef public_621bec6
#undef public_621bedb
