#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a0260);

PROC_DECLARE(0x62a0260, internal_62a0260, public_62a0260);
extern "C" NAKED register_t __cdecl internal_62a0260()
{
    __asm
    {
        fld dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [ecx+4]
        fidiv dword ptr ds : [eax+0x10]
        ret 
        UNREACHABLE_TRAP(0x62a0260)
    }
}
