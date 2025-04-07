#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62961e0);

PROC_DECLARE(0x62961e0, internal_62961e0, public_62961e0);
extern "C" NAKED register_t __cdecl internal_62961e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [eax+0x74]
        ret 
        UNREACHABLE_TRAP(0x62961e0)
    }
}
