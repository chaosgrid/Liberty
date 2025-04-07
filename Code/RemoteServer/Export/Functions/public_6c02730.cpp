#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c02730, internal_6c02730, public_6c02730);
extern "C" NAKED register_t __cdecl internal_6c02730()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e48c]
        mov dword ptr ds : [public_6c1414c], eax
        ret 
        UNREACHABLE_TRAP(0x6c02730)
    }
}
