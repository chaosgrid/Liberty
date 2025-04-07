#include "FLServer-PCH.h"

PROC_DECLARE(0x4191d6, internal_4191d6, public_4191d6);
extern "C" NAKED register_t __cdecl internal_4191d6()
{
    __asm
    {
        jmp dword ptr ds : [public_41b26c]
        UNREACHABLE_TRAP(0x4191d6)
    }
}
