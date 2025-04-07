#include "FLServer-PCH.h"

PROC_DECLARE(0x41885e, internal_41885e, public_41885e);
extern "C" NAKED register_t __cdecl internal_41885e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b9f8]
        UNREACHABLE_TRAP(0x41885e)
    }
}
