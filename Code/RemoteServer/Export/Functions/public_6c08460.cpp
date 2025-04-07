#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c08460, internal_6c08460, public_6c08460);
extern "C" NAKED register_t __cdecl internal_6c08460()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e648]
        mov dword ptr ds : [public_6c1430c], eax
        ret 
        UNREACHABLE_TRAP(0x6c08460)
    }
}
