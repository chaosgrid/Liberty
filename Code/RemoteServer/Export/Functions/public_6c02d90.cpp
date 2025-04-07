#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c02d90, internal_6c02d90, public_6c02d90);
extern "C" NAKED register_t __cdecl internal_6c02d90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e4a4]
        mov dword ptr ds : [public_6c1416c], eax
        ret 
        UNREACHABLE_TRAP(0x6c02d90)
    }
}
