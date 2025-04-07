#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bef590, internal_6bef590, public_6bef590);
extern "C" NAKED register_t __cdecl internal_6bef590()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0def0]
        mov dword ptr ds : [public_6c13c2c], eax
        ret 
        UNREACHABLE_TRAP(0x6bef590)
    }
}
