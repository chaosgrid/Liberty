#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b67f00, internal_6b67f00, public_6b67f00);
extern "C" NAKED register_t __cdecl internal_6b67f00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea78]
        mov dword ptr ds : [public_6b745cc], eax
        ret 
        UNREACHABLE_TRAP(0x6b67f00)
    }
}
