#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c06e80, internal_6c06e80, public_6c06e80);
extern "C" NAKED register_t __cdecl internal_6c06e80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e5e0]
        mov dword ptr ds : [public_6c14274], eax
        ret 
        UNREACHABLE_TRAP(0x6c06e80)
    }
}
