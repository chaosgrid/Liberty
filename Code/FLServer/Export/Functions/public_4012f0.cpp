#include "FLServer-PCH.h"

PROC_DECLARE(0x4012f0, internal_4012f0, public_4012f0);
extern "C" NAKED register_t __cdecl internal_4012f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        push 1
        push eax
        call dword ptr ds : [public_41bbf0]
        ret 
        UNREACHABLE_TRAP(0x4012f0)
    }
}
