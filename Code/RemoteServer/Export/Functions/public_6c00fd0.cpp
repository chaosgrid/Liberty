#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c00fd0, internal_6c00fd0, public_6c00fd0);
extern "C" NAKED register_t __cdecl internal_6c00fd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e418]
        mov dword ptr ds : [public_6c140a4], eax
        ret 
        UNREACHABLE_TRAP(0x6c00fd0)
    }
}
