#include "FLServer-PCH.h"

PROC_DECLARE(0x4193cc, internal_4193cc, public_4193cc);
extern "C" NAKED register_t __cdecl internal_4193cc()
{
    __asm
    {
        jmp dword ptr ds : [public_41b95c]
        UNREACHABLE_TRAP(0x4193cc)
    }
}
