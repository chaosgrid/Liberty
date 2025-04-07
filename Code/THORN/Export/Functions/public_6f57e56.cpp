#include "THORN-PCH.h"

PROC_DECLARE(0x6f57e56, internal_6f57e56, public_6f57e56);
extern "C" NAKED register_t __cdecl internal_6f57e56()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a030]
        UNREACHABLE_TRAP(0x6f57e56)
    }
}
