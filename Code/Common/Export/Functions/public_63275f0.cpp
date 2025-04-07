#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63275f0);

PROC_DECLARE(0x63275f0, internal_63275f0, public_63275f0);
extern "C" NAKED register_t __cdecl internal_63275f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x38], eax
        ret 4
        UNREACHABLE_TRAP(0x63275f0)
    }
}
