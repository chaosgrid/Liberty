#include "FLServer-PCH.h"

PROC_DECLARE(0x4191dc, internal_4191dc, public_4191dc);
extern "C" NAKED register_t __cdecl internal_4191dc()
{
    __asm
    {
        jmp dword ptr ds : [public_41b268]
        UNREACHABLE_TRAP(0x4191dc)
    }
}
