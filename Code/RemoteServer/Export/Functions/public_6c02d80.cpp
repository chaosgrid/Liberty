#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c02d80, internal_6c02d80, public_6c02d80);
extern "C" NAKED register_t __cdecl internal_6c02d80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e4a4]
        mov dword ptr ds : [public_6c14168], eax
        ret 
        UNREACHABLE_TRAP(0x6c02d80)
    }
}
