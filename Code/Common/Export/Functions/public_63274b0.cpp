#include "Common-PCH.h"

PROC_DECLARE(0x63274b0, internal_63274b0, public_63274b0);
extern "C" NAKED register_t __cdecl internal_63274b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x24], edx
        ret 4
        UNREACHABLE_TRAP(0x63274b0)
    }
}
