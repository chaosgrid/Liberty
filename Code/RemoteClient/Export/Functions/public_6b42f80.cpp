#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b42f80, internal_6b42f80, public_6b42f80);
extern "C" NAKED register_t __cdecl internal_6b42f80()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x24]
        ret 
        UNREACHABLE_TRAP(0x6b42f80)
    }
}
