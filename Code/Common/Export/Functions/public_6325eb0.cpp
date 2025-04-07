#include "Common-PCH.h"

PROC_DECLARE(0x6325eb0, internal_6325eb0, public_6325eb0);
extern "C" NAKED register_t __cdecl internal_6325eb0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_63a4538
        ret 4
        UNREACHABLE_TRAP(0x6325eb0)
    }
}
