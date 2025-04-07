#include "FLServer-PCH.h"

PROC_DECLARE(0x4197de, internal_4197de, public_4197de);
extern "C" NAKED register_t __cdecl internal_4197de()
{
    __asm
    {
        jmp dword ptr ds : [public_41bbdc]
        UNREACHABLE_TRAP(0x4197de)
    }
}
