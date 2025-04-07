#include "FLServer-PCH.h"

PROC_DECLARE(0x418888, internal_418888, public_418888);
extern "C" NAKED register_t __cdecl internal_418888()
{
    __asm
    {
        jmp dword ptr ds : [public_41baa4]
        UNREACHABLE_TRAP(0x418888)
    }
}
