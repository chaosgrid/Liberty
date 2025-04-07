#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b5fb0);

PROC_DECLARE(0x62b5fb0, internal_62b5fb0, public_62b5fb0);
extern "C" NAKED register_t __cdecl internal_62b5fb0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x88]
        fld dword ptr ds : [eax+0x1C]
        ret 
        UNREACHABLE_TRAP(0x62b5fb0)
    }
}
