#include "Common-PCH.h"

PROC_DECLARE(0x63294c0, internal_63294c0, public_63294c0);
extern "C" NAKED register_t __cdecl internal_63294c0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_63a40fc
        mov dword ptr ds : [eax+4], ecx
        ret 4
        UNREACHABLE_TRAP(0x63294c0)
    }
}
