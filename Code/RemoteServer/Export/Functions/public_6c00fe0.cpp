#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c00fe0, internal_6c00fe0, public_6c00fe0);
extern "C" NAKED register_t __cdecl internal_6c00fe0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e420]
        mov dword ptr ds : [public_6c140b8], eax
        ret 
        UNREACHABLE_TRAP(0x6c00fe0)
    }
}
