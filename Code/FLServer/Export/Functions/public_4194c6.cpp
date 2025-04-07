#include "FLServer-PCH.h"

PROC_DECLARE(0x4194c6, internal_4194c6, public_4194c6);
extern "C" NAKED register_t __cdecl internal_4194c6()
{
    __asm
    {
        jmp dword ptr ds : [public_41b944]
        UNREACHABLE_TRAP(0x4194c6)
    }
}
