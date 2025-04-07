#include "FLServer-PCH.h"

PROC_DECLARE(0x418cc6, internal_418cc6, public_418cc6);
extern "C" NAKED register_t __cdecl internal_418cc6()
{
    __asm
    {
        jmp dword ptr ds : [public_41b52c]
        UNREACHABLE_TRAP(0x418cc6)
    }
}
