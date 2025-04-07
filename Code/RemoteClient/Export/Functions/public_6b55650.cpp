#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b55650, internal_6b55650, public_6b55650);
extern "C" NAKED register_t __cdecl internal_6b55650()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e48c]
        mov dword ptr ds : [public_6b7408c], eax
        ret 
        UNREACHABLE_TRAP(0x6b55650)
    }
}
