#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bee500, internal_6bee500, public_6bee500);
extern "C" NAKED register_t __cdecl internal_6bee500()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0dea0]
        mov dword ptr ds : [public_6c13bdc], eax
        ret 
        UNREACHABLE_TRAP(0x6bee500)
    }
}
