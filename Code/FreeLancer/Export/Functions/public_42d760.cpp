#include "FreeLancer-PCH.h"

PROC_DECLARE(0x42d760, internal_42d760, public_42d760);
extern "C" NAKED register_t __cdecl internal_42d760()
{
    __asm
    {
        mov ecx, offset public_667cf8
        jmp dword ptr ds : [public_5c60d4]
        UNREACHABLE_TRAP(0x42d760)
    }
}
