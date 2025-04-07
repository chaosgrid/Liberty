#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c02da0, internal_6c02da0, public_6c02da0);
extern "C" NAKED register_t __cdecl internal_6c02da0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e4a8]
        mov dword ptr ds : [public_6c14164], eax
        ret 
        UNREACHABLE_TRAP(0x6c02da0)
    }
}
