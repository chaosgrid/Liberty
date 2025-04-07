#include "FLServer-PCH.h"

PROC_DECLARE(0x4012e0, internal_4012e0, public_4012e0);
extern "C" NAKED register_t __cdecl internal_4012e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        push 0
        push eax
        call dword ptr ds : [public_41bbf0]
        ret 
        UNREACHABLE_TRAP(0x4012e0)
    }
}
