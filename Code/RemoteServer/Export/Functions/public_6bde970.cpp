#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bde970, internal_6bde970, public_6bde970);
extern "C" NAKED register_t __cdecl internal_6bde970()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bbfc]
        mov dword ptr ds : [public_6c13ae8], eax
        ret 
        UNREACHABLE_TRAP(0x6bde970)
    }
}
