#include "FLServer-PCH.h"

PROC_DECLARE(0x41921e, internal_41921e, public_41921e);
extern "C" NAKED register_t __cdecl internal_41921e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b23c]
        UNREACHABLE_TRAP(0x41921e)
    }
}
