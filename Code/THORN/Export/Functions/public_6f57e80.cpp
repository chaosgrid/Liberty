#include "THORN-PCH.h"

PROC_DECLARE(0x6f57e80, internal_6f57e80, public_6f57e80);
extern "C" NAKED register_t __cdecl internal_6f57e80()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a050]
        UNREACHABLE_TRAP(0x6f57e80)
    }
}
