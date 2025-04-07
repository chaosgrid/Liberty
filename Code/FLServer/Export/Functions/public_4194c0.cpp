#include "FLServer-PCH.h"

PROC_DECLARE(0x4194c0, internal_4194c0, public_4194c0);
extern "C" NAKED register_t __cdecl internal_4194c0()
{
    __asm
    {
        jmp dword ptr ds : [public_41b948]
        UNREACHABLE_TRAP(0x4194c0)
    }
}
