#include "FLServer-PCH.h"

PROC_DECLARE(0x4190bc, internal_4190bc, public_4190bc);
extern "C" NAKED register_t __cdecl internal_4190bc()
{
    __asm
    {
        jmp dword ptr ds : [public_41b7e4]
        UNREACHABLE_TRAP(0x4190bc)
    }
}
