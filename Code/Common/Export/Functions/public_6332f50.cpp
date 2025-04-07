#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6332f50);

PROC_DECLARE(0x6332f50, internal_6332f50, public_6332f50);
extern "C" NAKED register_t __cdecl internal_6332f50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x10], eax
        ret 4
        UNREACHABLE_TRAP(0x6332f50)
    }
}
