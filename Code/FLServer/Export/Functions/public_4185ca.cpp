#include "FLServer-PCH.h"

PROC_DECLARE(0x4185ca, internal_4185ca, public_4185ca);
extern "C" NAKED register_t __cdecl internal_4185ca()
{
    __asm
    {
        jmp dword ptr ds : [public_41b044]
        UNREACHABLE_TRAP(0x4185ca)
    }
}
