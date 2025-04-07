#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c02b90, internal_6c02b90, public_6c02b90);
extern "C" NAKED register_t __cdecl internal_6c02b90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e498]
        mov dword ptr ds : [public_6c14158], eax
        ret 
        UNREACHABLE_TRAP(0x6c02b90)
    }
}
