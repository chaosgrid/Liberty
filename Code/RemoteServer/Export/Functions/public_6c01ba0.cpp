#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c01ba0, internal_6c01ba0, public_6c01ba0);
extern "C" NAKED register_t __cdecl internal_6c01ba0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e45c]
        mov dword ptr ds : [public_6c1410c], eax
        ret 
        UNREACHABLE_TRAP(0x6c01ba0)
    }
}
