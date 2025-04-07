#include "THORN-PCH.h"

PROC_DECLARE(0x6f39420, internal_6f39420, public_6f39420);
extern "C" NAKED register_t __cdecl internal_6f39420()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x24]
        ret 4
        UNREACHABLE_TRAP(0x6f39420)
    }
}
