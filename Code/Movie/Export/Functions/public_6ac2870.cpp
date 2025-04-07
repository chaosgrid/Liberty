#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac2870);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4e20);

#define public_6ac288b _public_6ac288b

PROC_DECLARE(0x6ac2870, internal_6ac2870, public_6ac2870);
extern "C" NAKED register_t __cdecl internal_6ac2870()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x14
        cmp eax, 5
        push ebx
        mov ebx, 1
        jbe public_6ac288b
        xor eax, eax
        pop ebx
        add esp, 0x14
        ret 0x10
        public_6ac288b : nop
        mov edx, dword ptr ss : [esp+0x24]
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov ecx, eax
        lea edi, ss:[esp+0xC]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        push edx
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        call public_6ac4e20
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        add esp, 0x14
        ret 0x10
        UNREACHABLE_TRAP(0x6ac2870)
    }
}

#undef public_6ac288b
