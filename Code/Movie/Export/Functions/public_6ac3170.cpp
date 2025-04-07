#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac3170);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3300);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3490);

#define public_6ac31c0 _public_6ac31c0

PROC_DECLARE(0x6ac3170, internal_6ac3170, public_6ac3170);
extern "C" NAKED register_t __cdecl internal_6ac3170()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        sub esp, 0x100
        lea eax, ss:[esp]
        push esi
        mov esi, dword ptr ss : [esp+0x114]
        push esi
        push eax
        push ecx
        call public_6ac3300
        test eax, eax
        je public_6ac31c0
        mov edx, dword ptr ss : [esp+0x110]
        mov ecx, dword ptr ss : [esp+0x108]
        push esi
        lea eax, ss:[esp+8]
        push edx
        push eax
        push ecx
        call public_6ac3490
        test eax, eax
        je public_6ac31c0
        mov eax, 1
        pop esi
        add esp, 0x100
        ret 0x10
        public_6ac31c0 : nop
        xor eax, eax
        pop esi
        add esp, 0x100
        ret 0x10
        UNREACHABLE_TRAP(0x6ac3170)
    }
}

#undef public_6ac31c0
