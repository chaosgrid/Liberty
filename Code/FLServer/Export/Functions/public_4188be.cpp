#include "FLServer-PCH.h"

PROC_DECLARE(0x4188be, internal_4188be, public_4188be);
extern "C" NAKED register_t __cdecl internal_4188be()
{
    __asm
    {
        jmp dword ptr ds : [public_41bac4]
        UNREACHABLE_TRAP(0x4188be)
    }
}
