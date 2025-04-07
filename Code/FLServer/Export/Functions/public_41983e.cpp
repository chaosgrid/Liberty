#include "FLServer-PCH.h"

PROC_DECLARE(0x41983e, internal_41983e, public_41983e);
extern "C" NAKED register_t __cdecl internal_41983e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b108]
        UNREACHABLE_TRAP(0x41983e)
    }
}
