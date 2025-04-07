#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b73b70, internal_6b73b70, public_6b73b70);
extern "C" NAKED register_t __cdecl internal_6b73b70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x1C]
        ret 4
        UNREACHABLE_TRAP(0x6b73b70)
    }
}
