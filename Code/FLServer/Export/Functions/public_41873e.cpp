#include "FLServer-PCH.h"

PROC_DECLARE(0x41873e, internal_41873e, public_41873e);
extern "C" NAKED register_t __cdecl internal_41873e()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba78]
        UNREACHABLE_TRAP(0x41873e)
    }
}
