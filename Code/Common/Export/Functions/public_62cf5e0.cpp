#include "Common-PCH.h"

PROC_DECLARE(0x62cf5e0, internal_62cf5e0, public_62cf5e0);
extern "C" NAKED register_t __cdecl internal_62cf5e0()
{
    __asm
    {
        mov eax, 2
        ret 4
        UNREACHABLE_TRAP(0x62cf5e0)
    }
}
