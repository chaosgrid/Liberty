#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6befdf0, internal_6befdf0, public_6befdf0);
extern "C" NAKED register_t __cdecl internal_6befdf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0df30]
        mov dword ptr ds : [public_6c13c48], eax
        ret 
        UNREACHABLE_TRAP(0x6befdf0)
    }
}
