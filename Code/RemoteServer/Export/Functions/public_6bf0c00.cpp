#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf0c00, internal_6bf0c00, public_6bf0c00);
extern "C" NAKED register_t __cdecl internal_6bf0c00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0df98]
        mov dword ptr ds : [public_6c13c94], eax
        ret 
        UNREACHABLE_TRAP(0x6bf0c00)
    }
}
