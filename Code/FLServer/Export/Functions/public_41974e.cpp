#include "FLServer-PCH.h"

PROC_DECLARE(0x41974e, internal_41974e, public_41974e);
extern "C" NAKED register_t __cdecl internal_41974e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b144]
        UNREACHABLE_TRAP(0x41974e)
    }
}
