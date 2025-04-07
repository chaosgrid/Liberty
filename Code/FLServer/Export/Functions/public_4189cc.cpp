#include "FLServer-PCH.h"

PROC_DECLARE(0x4189cc, internal_4189cc, public_4189cc);
extern "C" NAKED register_t __cdecl internal_4189cc()
{
    __asm
    {
        jmp dword ptr ds : [public_41b324]
        UNREACHABLE_TRAP(0x4189cc)
    }
}
