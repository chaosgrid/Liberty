#include "Common-PCH.h"

PROC_DECLARE(0x6287230, internal_6287230, public_6287230);
extern "C" NAKED register_t __cdecl internal_6287230()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x140]
        ret 
        UNREACHABLE_TRAP(0x6287230)
    }
}
