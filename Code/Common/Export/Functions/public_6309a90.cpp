#include "Common-PCH.h"

PROC_DECLARE(0x6309a90, internal_6309a90, public_6309a90);
extern "C" NAKED register_t __cdecl internal_6309a90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x48]
        ret 8
        UNREACHABLE_TRAP(0x6309a90)
    }
}
