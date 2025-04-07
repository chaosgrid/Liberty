#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c033e0, internal_6c033e0, public_6c033e0);
extern "C" NAKED register_t __cdecl internal_6c033e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e4cc]
        mov dword ptr ds : [public_6c14194], eax
        ret 
        UNREACHABLE_TRAP(0x6c033e0)
    }
}
