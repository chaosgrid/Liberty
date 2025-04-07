#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3c590, internal_6b3c590, public_6b3c590);
extern "C" NAKED register_t __cdecl internal_6b3c590()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c05c]
        mov dword ptr ds : [public_6b73dbc], eax
        ret 
        UNREACHABLE_TRAP(0x6b3c590)
    }
}
