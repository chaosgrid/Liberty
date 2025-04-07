#include "Common-PCH.h"

PROC_DECLARE(0x6266df0, internal_6266df0, public_6266df0);
extern "C" NAKED register_t __cdecl internal_6266df0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x6266df0)
    }
}
