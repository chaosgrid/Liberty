#include "Common-PCH.h"

PROC_DECLARE(0x63253b0, internal_63253b0, public_63253b0);
extern "C" NAKED register_t __cdecl internal_63253b0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_63a3e54
        ret 4
        UNREACHABLE_TRAP(0x63253b0)
    }
}
