#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3e500, internal_6b3e500, public_6b3e500);
extern "C" NAKED register_t __cdecl internal_6b3e500()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c12c]
        mov dword ptr ds : [public_6b73e1c], eax
        ret 
        UNREACHABLE_TRAP(0x6b3e500)
    }
}
