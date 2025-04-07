#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6809000);
CLANG_FORWARD_PROC_SYMBOL(public_6809010);

PROC_DECLARE(0x6809000, internal_6809000, public_6809000);
extern "C" NAKED register_t __cdecl internal_6809000()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6809010
        add esp, 4
        ret 
        UNREACHABLE_TRAP(0x6809000)
    }
}
