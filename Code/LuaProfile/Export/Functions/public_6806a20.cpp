#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806a20);
CLANG_FORWARD_PROC_SYMBOL(public_680a970);

PROC_DECLARE(0x6806a20, internal_6806a20, public_6806a20);
extern "C" NAKED register_t __cdecl internal_6806a20()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call public_680a970
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6806a20)
    }
}
