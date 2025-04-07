#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6312890);

PROC_DECLARE(0x626c100, internal_626c100, public_626c100);
extern "C" NAKED register_t __cdecl internal_626c100()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push 4
        push eax
        call public_6312890
        ret 4
        UNREACHABLE_TRAP(0x626c100)
    }
}
