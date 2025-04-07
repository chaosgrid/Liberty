#include "FLServer-PCH.h"

PROC_DECLARE(0x41888e, internal_41888e, public_41888e);
extern "C" NAKED register_t __cdecl internal_41888e()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba50]
        UNREACHABLE_TRAP(0x41888e)
    }
}
