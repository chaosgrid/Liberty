#include "Common-PCH.h"

PROC_DECLARE(0x627cb80, internal_627cb80, public_627cb80);
extern "C" NAKED register_t __cdecl internal_627cb80()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+8]
        push edx
        mov edx, dword ptr ds : [ecx+4]
        push edx
        push ecx
        call dword ptr ds : [eax+0x28]
        ret 8
        UNREACHABLE_TRAP(0x627cb80)
    }
}
