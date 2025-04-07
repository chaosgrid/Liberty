#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c02700, internal_6c02700, public_6c02700);
extern "C" NAKED register_t __cdecl internal_6c02700()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e480]
        mov dword ptr ds : [public_6c1413c], eax
        ret 
        UNREACHABLE_TRAP(0x6c02700)
    }
}
