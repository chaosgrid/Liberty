#include "Common-PCH.h"

PROC_DECLARE(0x6325df0, internal_6325df0, public_6325df0);
extern "C" NAKED register_t __cdecl internal_6325df0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], offset public_63a44b4
        ret 4
        UNREACHABLE_TRAP(0x6325df0)
    }
}
