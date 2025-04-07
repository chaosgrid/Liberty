#include "Common-PCH.h"

PROC_DECLARE(0x629afd0, internal_629afd0, public_629afd0);
extern "C" NAKED register_t __cdecl internal_629afd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x18], eax
        ret 4
        UNREACHABLE_TRAP(0x629afd0)
    }
}
