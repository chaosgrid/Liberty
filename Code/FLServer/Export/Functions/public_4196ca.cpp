#include "FLServer-PCH.h"

PROC_DECLARE(0x4196ca, internal_4196ca, public_4196ca);
extern "C" NAKED register_t __cdecl internal_4196ca()
{
    __asm
    {
        jmp dword ptr ds : [public_41b19c]
        UNREACHABLE_TRAP(0x4196ca)
    }
}
