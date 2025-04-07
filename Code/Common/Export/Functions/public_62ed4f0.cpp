#include "Common-PCH.h"

PROC_DECLARE(0x62ed4f0, internal_62ed4f0, public_62ed4f0);
extern "C" NAKED register_t __cdecl internal_62ed4f0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_63a0880
        ret 4
        UNREACHABLE_TRAP(0x62ed4f0)
    }
}
