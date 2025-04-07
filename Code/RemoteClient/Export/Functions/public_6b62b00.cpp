#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b62b00, internal_6b62b00, public_6b62b00);
extern "C" NAKED register_t __cdecl internal_6b62b00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e908]
        mov dword ptr ds : [public_6b74474], eax
        ret 
        UNREACHABLE_TRAP(0x6b62b00)
    }
}
