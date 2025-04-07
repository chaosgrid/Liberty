#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf0be0, internal_6bf0be0, public_6bf0be0);
extern "C" NAKED register_t __cdecl internal_6bf0be0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0df94]
        mov dword ptr ds : [public_6c13c98], eax
        ret 
        UNREACHABLE_TRAP(0x6bf0be0)
    }
}
