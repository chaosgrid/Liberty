#include "FLServer-PCH.h"

PROC_DECLARE(0x41971e, internal_41971e, public_41971e);
extern "C" NAKED register_t __cdecl internal_41971e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b164]
        UNREACHABLE_TRAP(0x41971e)
    }
}
