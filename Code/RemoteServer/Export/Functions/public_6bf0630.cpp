#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf0630, internal_6bf0630, public_6bf0630);
extern "C" NAKED register_t __cdecl internal_6bf0630()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0df78]
        mov dword ptr ds : [public_6c13c74], eax
        ret 
        UNREACHABLE_TRAP(0x6bf0630)
    }
}
