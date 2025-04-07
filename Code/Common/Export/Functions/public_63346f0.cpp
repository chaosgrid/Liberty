#include "Common-PCH.h"

PROC_DECLARE(0x63346f0, internal_63346f0, public_63346f0);
extern "C" NAKED register_t __cdecl internal_63346f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+ecx*4]
        ret 4
        UNREACHABLE_TRAP(0x63346f0)
    }
}
