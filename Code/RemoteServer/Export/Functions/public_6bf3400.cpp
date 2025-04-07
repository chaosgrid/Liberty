#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf3400, internal_6bf3400, public_6bf3400);
extern "C" NAKED register_t __cdecl internal_6bf3400()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e030]
        mov dword ptr ds : [public_6c13d14], eax
        ret 
        UNREACHABLE_TRAP(0x6bf3400)
    }
}
