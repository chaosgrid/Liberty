#include "FLServer-PCH.h"

PROC_DECLARE(0x41882e, internal_41882e, public_41882e);
extern "C" NAKED register_t __cdecl internal_41882e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b9dc]
        UNREACHABLE_TRAP(0x41882e)
    }
}
