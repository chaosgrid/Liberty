#include "Deformable2-PCH.h"

PROC_DECLARE(0x65fe060, internal_65fe060, public_65fe060);
extern "C" NAKED register_t __cdecl internal_65fe060()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+4]
        inc ecx
        mov dword ptr ds : [eax+4], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x65fe060)
    }
}
