#include "THORN-PCH.h"

PROC_DECLARE(0x6f57f22, internal_6f57f22, public_6f57f22);
extern "C" NAKED register_t __cdecl internal_6f57f22()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a070]
        UNREACHABLE_TRAP(0x6f57f22)
    }
}
