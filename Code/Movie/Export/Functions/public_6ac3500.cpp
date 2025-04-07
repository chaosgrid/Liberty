#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac30a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3490);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3500);

#define public_6ac3555 _public_6ac3555

PROC_DECLARE(0x6ac3500, internal_6ac3500, public_6ac3500);
extern "C" NAKED register_t __cdecl internal_6ac3500()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        sub esp, 0x100
        lea eax, ss:[esp]
        push esi
        mov esi, dword ptr ss : [esp+0x118]
        push esi
        push eax
        push ecx
        push edx
        call public_6ac3490
        test eax, eax
        je public_6ac3555
        mov eax, dword ptr ss : [esp+0x114]
        mov ecx, dword ptr ss : [esp+0x110]
        push esi
        push eax
        lea edx, ss:[esp+0xC]
        push ecx
        push edx
        call public_6ac30a0
        test eax, eax
        je public_6ac3555
        mov eax, 1
        pop esi
        add esp, 0x100
        ret 0x14
        public_6ac3555 : nop
        xor eax, eax
        pop esi
        add esp, 0x100
        ret 0x14
        UNREACHABLE_TRAP(0x6ac3500)
    }
}

#undef public_6ac3555
