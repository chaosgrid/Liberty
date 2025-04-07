#include "Common-PCH.h"

PROC_DECLARE(0x63061c0, internal_63061c0, public_63061c0);
extern "C" NAKED register_t __cdecl internal_63061c0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_63a2ffc
        ret 4
        UNREACHABLE_TRAP(0x63061c0)
    }
}
