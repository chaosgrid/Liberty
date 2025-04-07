#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa7fb0);

PROC_DECLARE(0x6fa7fb0, internal_6fa7fb0, public_6fa7fb0);
extern "C" NAKED register_t __cdecl internal_6fa7fb0()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ds : [ecx]
        lea eax, ss:[esp]
        push eax
        push ecx
        call dword ptr ds : [public_6fb347c]
        mov eax, dword ptr ss : [esp+8]
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6fa7fb0)
    }
}
