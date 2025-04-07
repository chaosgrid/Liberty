#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633bad0);

PROC_DECLARE(0x633bad0, internal_633bad0, public_633bad0);
extern "C" NAKED register_t __cdecl internal_633bad0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x14], eax
        ret 4
        UNREACHABLE_TRAP(0x633bad0)
    }
}
