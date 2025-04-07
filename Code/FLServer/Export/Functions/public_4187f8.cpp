#include "FLServer-PCH.h"

PROC_DECLARE(0x4187f8, internal_4187f8, public_4187f8);
extern "C" NAKED register_t __cdecl internal_4187f8()
{
    __asm
    {
        jmp dword ptr ds : [public_41bbac]
        UNREACHABLE_TRAP(0x4187f8)
    }
}
