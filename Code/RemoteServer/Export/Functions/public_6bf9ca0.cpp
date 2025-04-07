#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf9ca0, internal_6bf9ca0, public_6bf9ca0);
extern "C" NAKED register_t __cdecl internal_6bf9ca0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e290]
        mov dword ptr ds : [public_6c13f04], eax
        ret 
        UNREACHABLE_TRAP(0x6bf9ca0)
    }
}
