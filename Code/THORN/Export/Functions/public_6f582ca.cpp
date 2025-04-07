#include "THORN-PCH.h"

PROC_DECLARE(0x6f582ca, internal_6f582ca, public_6f582ca);
extern "C" NAKED register_t __cdecl internal_6f582ca()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a118]
        UNREACHABLE_TRAP(0x6f582ca)
    }
}
