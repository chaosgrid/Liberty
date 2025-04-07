#include "Common-PCH.h"

PROC_DECLARE(0x62927f0, internal_62927f0, public_62927f0);
extern "C" NAKED register_t __cdecl internal_62927f0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x62927f0)
    }
}
