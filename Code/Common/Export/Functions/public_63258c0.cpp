#include "Common-PCH.h"

PROC_DECLARE(0x63258c0, internal_63258c0, public_63258c0);
extern "C" NAKED register_t __cdecl internal_63258c0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        ret 4
        UNREACHABLE_TRAP(0x63258c0)
    }
}
