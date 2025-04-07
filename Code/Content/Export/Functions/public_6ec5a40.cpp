#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);

#define public_6ec5a7d _public_6ec5a7d

PROC_DECLARE(0x6ec5a40, internal_6ec5a40, public_6ec5a40);
extern "C" NAKED register_t __cdecl internal_6ec5a40()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[esi+0x50]
        push eax
        mov bl, 1
        call public_6f15b90
        test eax, 0x3FFFFFFF
        mov dword ptr ss : [esp+8], eax
        je public_6ec5a7d
        mov ecx, dword ptr ds : [esi+0x84]
        push ecx
        add esi, 0x10
        lea edx, ss:[esp+0xC]
        push esi
        push edx
        call dword ptr ds : [public_6fb33c4]
        add esp, 0xC
        pop esi
        mov al, bl
        pop ebx
        pop ecx
        ret 
        public_6ec5a7d : nop
        pop esi
        xor al, al
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ec5a40)
    }
}

#undef public_6ec5a7d
