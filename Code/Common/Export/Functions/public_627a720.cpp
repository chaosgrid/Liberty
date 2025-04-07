#include "Common-PCH.h"

PROC_DECLARE(0x627a720, internal_627a720, public_627a720);
extern "C" NAKED register_t __cdecl internal_627a720()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_63fbbc4], eax
        ret 
        UNREACHABLE_TRAP(0x627a720)
    }
}
