#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b66400, internal_6b66400, public_6b66400);
extern "C" NAKED register_t __cdecl internal_6b66400()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea14]
        mov dword ptr ds : [public_6b74550], eax
        ret 
        UNREACHABLE_TRAP(0x6b66400)
    }
}
