#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c05650, internal_6c05650, public_6c05650);
extern "C" NAKED register_t __cdecl internal_6c05650()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e598]
        mov dword ptr ds : [public_6c14214], eax
        ret 
        UNREACHABLE_TRAP(0x6c05650)
    }
}
