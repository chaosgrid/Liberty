#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);

#define public_65fec4c _public_65fec4c
#define public_65fec77 _public_65fec77

PROC_DECLARE(0x65fec10, internal_65fec10, public_65fec10);
extern "C" NAKED register_t __cdecl internal_65fec10()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [ebp+0x14]
        push eax
        call public_6600bb0
        mov ebx, dword ptr ss : [esp+0x14]
        add esp, 4
        xor eax, eax
        test ebx, ebx
        mov dword ptr ss : [ebp+0x14], 0
        je public_65fec77
        push esi
        or ecx, 0xFFFFFFFF
        push edi
        mov edi, ebx
        repne scasb
        not ecx
        dec ecx
        mov esi, ecx
        inc esi
        cmp esi, 0x40
        jbe public_65fec4c
        mov esi, 0x40
        public_65fec4c : nop
        push esi
        call public_6600bb6
        push esi
        push ebx
        push eax
        mov dword ptr ss : [ebp+0x14], eax
        call dword ptr ds : [public_6601028]
        mov ecx, dword ptr ss : [ebp+0x14]
        mov byte ptr ds : [esi+ecx-1], 0
        mov edx, dword ptr ss : [ebp+0x14]
        push edx
        call dword ptr ds : [public_6601078]
        add esp, 0x14
        pop edi
        xor eax, eax
        pop esi
        public_65fec77 : nop
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x65fec10)
    }
}

#undef public_65fec4c
#undef public_65fec77
