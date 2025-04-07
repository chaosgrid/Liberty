#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd4360);

PROC_DECLARE(0x6bd4360, internal_6bd4360, public_6bd4360);
extern "C" NAKED register_t __cdecl internal_6bd4360()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x70]
        ret 
        UNREACHABLE_TRAP(0x6bd4360)
    }
}
