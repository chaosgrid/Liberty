#include "FLServer-PCH.h"

PROC_DECLARE(0x4191ca, internal_4191ca, public_4191ca);
extern "C" NAKED register_t __cdecl internal_4191ca()
{
    __asm
    {
        jmp dword ptr ds : [public_41b274]
        UNREACHABLE_TRAP(0x4191ca)
    }
}
