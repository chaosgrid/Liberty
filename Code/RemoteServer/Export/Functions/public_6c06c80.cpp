#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c06c80, internal_6c06c80, public_6c06c80);
extern "C" NAKED register_t __cdecl internal_6c06c80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e5d0]
        mov dword ptr ds : [public_6c1426c], eax
        ret 
        UNREACHABLE_TRAP(0x6c06c80)
    }
}
