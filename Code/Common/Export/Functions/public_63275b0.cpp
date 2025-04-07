#include "Common-PCH.h"

PROC_DECLARE(0x63275b0, internal_63275b0, public_63275b0);
extern "C" NAKED register_t __cdecl internal_63275b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x30], eax
        ret 4
        UNREACHABLE_TRAP(0x63275b0)
    }
}
