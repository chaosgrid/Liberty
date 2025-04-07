#include "Alchemy-PCH.h"

PROC_DECLARE(0x6214f90, internal_6214f90, public_6214f90);
extern "C" NAKED register_t __cdecl internal_6214f90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x58]
        inc ecx
        mov dword ptr ds : [eax+0x58], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6214f90)
    }
}
