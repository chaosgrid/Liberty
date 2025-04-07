#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bdaac0, internal_6bdaac0, public_6bdaac0);
extern "C" NAKED register_t __cdecl internal_6bdaac0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0baf4]
        mov dword ptr ds : [public_6c13a70], eax
        ret 
        UNREACHABLE_TRAP(0x6bdaac0)
    }
}
