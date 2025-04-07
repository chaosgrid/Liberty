#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6be1240, internal_6be1240, public_6be1240);
extern "C" NAKED register_t __cdecl internal_6be1240()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bc0c]
        mov dword ptr ds : [public_6c13af4], eax
        ret 
        UNREACHABLE_TRAP(0x6be1240)
    }
}
