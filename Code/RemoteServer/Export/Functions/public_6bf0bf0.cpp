#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf0bf0, internal_6bf0bf0, public_6bf0bf0);
extern "C" NAKED register_t __cdecl internal_6bf0bf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0df94]
        mov dword ptr ds : [public_6c13c9c], eax
        ret 
        UNREACHABLE_TRAP(0x6bf0bf0)
    }
}
