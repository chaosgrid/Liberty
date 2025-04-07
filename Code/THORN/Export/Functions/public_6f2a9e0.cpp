#include "THORN-PCH.h"

PROC_DECLARE(0x6f2a9e0, internal_6f2a9e0, public_6f2a9e0);
extern "C" NAKED register_t __cdecl internal_6f2a9e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+4], eax
        ret 4
        UNREACHABLE_TRAP(0x6f2a9e0)
    }
}
