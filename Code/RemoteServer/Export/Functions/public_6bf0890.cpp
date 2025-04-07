#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf0890, internal_6bf0890, public_6bf0890);
extern "C" NAKED register_t __cdecl internal_6bf0890()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0df88]
        mov dword ptr ds : [public_6c13c84], eax
        ret 
        UNREACHABLE_TRAP(0x6bf0890)
    }
}
