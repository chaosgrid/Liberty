#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c05900, internal_6c05900, public_6c05900);
extern "C" NAKED register_t __cdecl internal_6c05900()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e5a4]
        mov dword ptr ds : [public_6c14224], eax
        ret 
        UNREACHABLE_TRAP(0x6c05900)
    }
}
