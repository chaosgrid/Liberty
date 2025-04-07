#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c08450, internal_6c08450, public_6c08450);
extern "C" NAKED register_t __cdecl internal_6c08450()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e648]
        mov dword ptr ds : [public_6c14308], eax
        ret 
        UNREACHABLE_TRAP(0x6c08450)
    }
}
