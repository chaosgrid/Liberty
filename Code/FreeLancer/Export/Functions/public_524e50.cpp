#include "FreeLancer-PCH.h"

PROC_DECLARE(0x524e50, internal_524e50, public_524e50);
extern "C" NAKED register_t __cdecl internal_524e50()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x3C]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+0x38]
        ret 4
        UNREACHABLE_TRAP(0x524e50)
    }
}
