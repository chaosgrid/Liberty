#include "FLServer-PCH.h"

PROC_DECLARE(0x419796, internal_419796, public_419796);
extern "C" NAKED register_t __cdecl internal_419796()
{
    __asm
    {
        jmp dword ptr ds : [public_41bc0c]
        UNREACHABLE_TRAP(0x419796)
    }
}
