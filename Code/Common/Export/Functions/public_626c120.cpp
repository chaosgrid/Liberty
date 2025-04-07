#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6312890);

PROC_DECLARE(0x626c120, internal_626c120, public_626c120);
extern "C" NAKED register_t __cdecl internal_626c120()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push 1
        push eax
        call public_6312890
        ret 4
        UNREACHABLE_TRAP(0x626c120)
    }
}
