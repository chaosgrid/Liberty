#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf0880, internal_6bf0880, public_6bf0880);
extern "C" NAKED register_t __cdecl internal_6bf0880()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0df84]
        mov dword ptr ds : [public_6c13c8c], eax
        ret 
        UNREACHABLE_TRAP(0x6bf0880)
    }
}
