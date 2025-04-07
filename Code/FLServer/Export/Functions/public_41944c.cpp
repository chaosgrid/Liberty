#include "FLServer-PCH.h"

PROC_DECLARE(0x41944c, internal_41944c, public_41944c);
extern "C" NAKED register_t __cdecl internal_41944c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b988]
        UNREACHABLE_TRAP(0x41944c)
    }
}
