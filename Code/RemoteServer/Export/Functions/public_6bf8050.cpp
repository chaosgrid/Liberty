#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf8050, internal_6bf8050, public_6bf8050);
extern "C" NAKED register_t __cdecl internal_6bf8050()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e1f4]
        mov dword ptr ds : [public_6c13e8c], eax
        ret 
        UNREACHABLE_TRAP(0x6bf8050)
    }
}
