#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c02ba0, internal_6c02ba0, public_6c02ba0);
extern "C" NAKED register_t __cdecl internal_6c02ba0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e498]
        mov dword ptr ds : [public_6c1415c], eax
        ret 
        UNREACHABLE_TRAP(0x6c02ba0)
    }
}
