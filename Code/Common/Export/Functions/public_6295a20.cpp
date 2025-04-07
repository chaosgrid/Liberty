#include "Common-PCH.h"

PROC_DECLARE(0x6295a20, internal_6295a20, public_6295a20);
extern "C" NAKED register_t __cdecl internal_6295a20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [eax+0x80]
        ret 
        UNREACHABLE_TRAP(0x6295a20)
    }
}
