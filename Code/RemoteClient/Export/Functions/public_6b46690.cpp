#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b46690, internal_6b46690, public_6b46690);
extern "C" NAKED register_t __cdecl internal_6b46690()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c300]
        mov dword ptr ds : [public_6b73edc], eax
        ret 
        UNREACHABLE_TRAP(0x6b46690)
    }
}
