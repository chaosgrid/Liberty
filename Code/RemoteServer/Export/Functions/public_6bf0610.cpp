#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf0610, internal_6bf0610, public_6bf0610);
extern "C" NAKED register_t __cdecl internal_6bf0610()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0df74]
        mov dword ptr ds : [public_6c13c78], eax
        ret 
        UNREACHABLE_TRAP(0x6bf0610)
    }
}
