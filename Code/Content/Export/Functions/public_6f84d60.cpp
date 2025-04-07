#include "Content-PCH.h"

PROC_DECLARE(0x6f84d60, internal_6f84d60, public_6f84d60);
extern "C" NAKED register_t __cdecl internal_6f84d60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x1C], eax
        ret 4
        UNREACHABLE_TRAP(0x6f84d60)
    }
}
