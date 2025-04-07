#include "FLServer-PCH.h"

PROC_DECLARE(0x4191d0, internal_4191d0, public_4191d0);
extern "C" NAKED register_t __cdecl internal_4191d0()
{
    __asm
    {
        jmp dword ptr ds : [public_41b270]
        UNREACHABLE_TRAP(0x4191d0)
    }
}
