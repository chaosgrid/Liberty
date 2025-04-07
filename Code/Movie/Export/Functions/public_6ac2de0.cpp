#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac2de0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac5610);
CLANG_FORWARD_PROC_SYMBOL(public_6ac5d70);

PROC_DECLARE(0x6ac2de0, internal_6ac2de0, public_6ac2de0);
extern "C" NAKED register_t __cdecl internal_6ac2de0()
{
    __asm
    {
        sub esp, 0x988
        mov ecx, dword ptr ss : [esp+0x98C]
        lea eax, ss:[esp]
        push esi
        mov esi, dword ptr ss : [esp+0x9A0]
        push esi
        push eax
        push 0x3C
        push 4
        push ecx
        call public_6ac5d70
        push esi
        mov edx, dword ptr ss : [esp+0x9A0]
        mov eax, dword ptr ss : [esp+0x99C]
        mov ecx, dword ptr ss : [esp+0x998]
        push edx
        push eax
        push ecx
        push 0x3C
        lea edx, ss:[esp+0x18]
        push 4
        push edx
        call public_6ac5610
        pop esi
        add esp, 0x988
        ret 0x14
        UNREACHABLE_TRAP(0x6ac2de0)
    }
}
