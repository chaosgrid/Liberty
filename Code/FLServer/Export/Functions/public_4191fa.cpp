#include "FLServer-PCH.h"

PROC_DECLARE(0x4191fa, internal_4191fa, public_4191fa);
extern "C" NAKED register_t __cdecl internal_4191fa()
{
    __asm
    {
        jmp dword ptr ds : [public_41b254]
        UNREACHABLE_TRAP(0x4191fa)
    }
}
