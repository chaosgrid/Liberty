#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6366d10);

PROC_DECLARE(0x6366d10, internal_6366d10, public_6366d10);
extern "C" NAKED register_t __cdecl internal_6366d10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        inc dword ptr ds : [eax]
        ret 4
        UNREACHABLE_TRAP(0x6366d10)
    }
}
