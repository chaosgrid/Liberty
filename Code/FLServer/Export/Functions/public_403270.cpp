#include "FLServer-PCH.h"

PROC_DECLARE(0x403270, internal_403270, public_403270);
extern "C" NAKED register_t __cdecl internal_403270()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        dec eax
        ret 4
        UNREACHABLE_TRAP(0x403270)
    }
}
