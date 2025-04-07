#include "FLServer-PCH.h"

PROC_DECLARE(0x419206, internal_419206, public_419206);
extern "C" NAKED register_t __cdecl internal_419206()
{
    __asm
    {
        jmp dword ptr ds : [public_41b24c]
        UNREACHABLE_TRAP(0x419206)
    }
}
