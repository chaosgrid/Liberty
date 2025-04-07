#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6eb1a8c _public_6eb1a8c
#define public_6eb1ab7 _public_6eb1ab7

PROC_DECLARE(0x6eb1a50, internal_6eb1a50, public_6eb1a50);
extern "C" NAKED register_t __cdecl internal_6eb1a50()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [ebp+0x14]
        push eax
        call public_6ed0c50
        mov ebx, dword ptr ss : [esp+0x14]
        add esp, 4
        xor eax, eax
        test ebx, ebx
        mov dword ptr ss : [ebp+0x14], 0
        je public_6eb1ab7
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
        jbe public_6eb1a8c
        mov esi, 0x40
        public_6eb1a8c : nop
        push esi
        call public_6ed0c5c
        push esi
        push ebx
        push eax
        mov dword ptr ss : [ebp+0x14], eax
        call dword ptr ds : [public_6ed1028]
        mov ecx, dword ptr ss : [ebp+0x14]
        mov byte ptr ds : [esi+ecx-1], 0
        mov edx, dword ptr ss : [ebp+0x14]
        push edx
        call dword ptr ds : [public_6ed1084]
        add esp, 0x14
        pop edi
        xor eax, eax
        pop esi
        public_6eb1ab7 : nop
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6eb1a50)
    }
}

#undef public_6eb1a8c
#undef public_6eb1ab7
