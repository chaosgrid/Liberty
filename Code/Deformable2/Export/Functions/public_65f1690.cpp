#include "Deformable2-PCH.h"

PROC_DECLARE(0x65f1690, internal_65f1690, public_65f1690);
extern "C" NAKED register_t __cdecl internal_65f1690()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+4], ecx
        ret 8
        UNREACHABLE_TRAP(0x65f1690)
    }
}
