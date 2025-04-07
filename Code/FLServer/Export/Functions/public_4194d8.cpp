#include "FLServer-PCH.h"

PROC_DECLARE(0x4194d8, internal_4194d8, public_4194d8);
extern "C" NAKED register_t __cdecl internal_4194d8()
{
    __asm
    {
        jmp dword ptr ds : [public_41b938]
        UNREACHABLE_TRAP(0x4194d8)
    }
}
