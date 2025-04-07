#include "Common-PCH.h"

PROC_DECLARE(0x62a2db0, internal_62a2db0, public_62a2db0);
extern "C" NAKED register_t __cdecl internal_62a2db0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x62a2db0)
    }
}
