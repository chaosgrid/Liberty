#include "FLServer-PCH.h"

PROC_DECLARE(0x41880a, internal_41880a, public_41880a);
extern "C" NAKED register_t __cdecl internal_41880a()
{
    __asm
    {
        jmp dword ptr ds : [public_41bb44]
        UNREACHABLE_TRAP(0x41880a)
    }
}
