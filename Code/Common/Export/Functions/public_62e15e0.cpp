#include "Common-PCH.h"

PROC_DECLARE(0x62e15e0, internal_62e15e0, public_62e15e0);
extern "C" NAKED register_t __cdecl internal_62e15e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        imul eax, dword ptr ds : [ecx+8]
        ret 
        UNREACHABLE_TRAP(0x62e15e0)
    }
}
