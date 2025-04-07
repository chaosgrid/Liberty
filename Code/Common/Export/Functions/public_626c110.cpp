#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63128e0);

PROC_DECLARE(0x626c110, internal_626c110, public_626c110);
extern "C" NAKED register_t __cdecl internal_626c110()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push 4
        push eax
        call public_63128e0
        ret 4
        UNREACHABLE_TRAP(0x626c110)
    }
}
