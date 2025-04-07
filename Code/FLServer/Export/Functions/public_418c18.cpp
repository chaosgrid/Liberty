#include "FLServer-PCH.h"

PROC_DECLARE(0x418c18, internal_418c18, public_418c18);
extern "C" NAKED register_t __cdecl internal_418c18()
{
    __asm
    {
        jmp dword ptr ds : [public_41b4b4]
        UNREACHABLE_TRAP(0x418c18)
    }
}
