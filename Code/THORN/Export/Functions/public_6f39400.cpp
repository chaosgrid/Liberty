#include "THORN-PCH.h"

PROC_DECLARE(0x6f39400, internal_6f39400, public_6f39400);
extern "C" NAKED register_t __cdecl internal_6f39400()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x20]
        ret 4
        UNREACHABLE_TRAP(0x6f39400)
    }
}
