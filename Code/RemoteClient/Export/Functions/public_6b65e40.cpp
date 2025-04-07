#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b65e40, internal_6b65e40, public_6b65e40);
extern "C" NAKED register_t __cdecl internal_6b65e40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea00]
        mov dword ptr ds : [public_6b7452c], eax
        ret 
        UNREACHABLE_TRAP(0x6b65e40)
    }
}
