#include "Freelancer-PCH.h"

PROC_DECLARE(0x52f3d0, internal_52f3d0, public_52f3d0);
extern "C" NAKED register_t __cdecl internal_52f3d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov al, byte ptr ds : [eax+0x44]
        ret 4
        UNREACHABLE_TRAP(0x52f3d0)
    }
}
