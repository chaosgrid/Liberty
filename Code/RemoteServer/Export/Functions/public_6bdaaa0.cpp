#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bdaaa0, internal_6bdaaa0, public_6bdaaa0);
extern "C" NAKED register_t __cdecl internal_6bdaaa0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0baf0]
        mov dword ptr ds : [public_6c13a74], eax
        ret 
        UNREACHABLE_TRAP(0x6bdaaa0)
    }
}
