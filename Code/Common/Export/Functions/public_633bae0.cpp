#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633bae0);

PROC_DECLARE(0x633bae0, internal_633bae0, public_633bae0);
extern "C" NAKED register_t __cdecl internal_633bae0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x28], eax
        ret 4
        UNREACHABLE_TRAP(0x633bae0)
    }
}
