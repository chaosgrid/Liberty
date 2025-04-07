#include "THORN-PCH.h"

PROC_DECLARE(0x6f57f10, internal_6f57f10, public_6f57f10);
extern "C" NAKED register_t __cdecl internal_6f57f10()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a064]
        UNREACHABLE_TRAP(0x6f57f10)
    }
}
