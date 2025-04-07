#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6310040);

PROC_DECLARE(0x6277090, internal_6277090, public_6277090);
extern "C" NAKED register_t __cdecl internal_6277090()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        call public_6310040
        ret 8
        UNREACHABLE_TRAP(0x6277090)
    }
}
