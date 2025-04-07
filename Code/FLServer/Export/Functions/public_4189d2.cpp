#include "FLServer-PCH.h"

PROC_DECLARE(0x4189d2, internal_4189d2, public_4189d2);
extern "C" NAKED register_t __cdecl internal_4189d2()
{
    __asm
    {
        jmp dword ptr ds : [public_41b328]
        UNREACHABLE_TRAP(0x4189d2)
    }
}
