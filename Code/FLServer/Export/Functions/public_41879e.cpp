#include "FLServer-PCH.h"

PROC_DECLARE(0x41879e, internal_41879e, public_41879e);
extern "C" NAKED register_t __cdecl internal_41879e()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba38]
        UNREACHABLE_TRAP(0x41879e)
    }
}
