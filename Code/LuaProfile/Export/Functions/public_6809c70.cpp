#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6805ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6809c70);

PROC_DECLARE(0x6809c70, internal_6809c70, public_6809c70);
extern "C" NAKED register_t __cdecl internal_6809c70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6805ee0
        push eax
        call public_6801bd0
        mov eax, dword ptr ds : [eax+8]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6809c70)
    }
}
