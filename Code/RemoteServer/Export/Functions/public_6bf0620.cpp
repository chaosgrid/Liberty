#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf0620, internal_6bf0620, public_6bf0620);
extern "C" NAKED register_t __cdecl internal_6bf0620()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0df74]
        mov dword ptr ds : [public_6c13c7c], eax
        ret 
        UNREACHABLE_TRAP(0x6bf0620)
    }
}
