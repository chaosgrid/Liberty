#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf2fa0, internal_6bf2fa0, public_6bf2fa0);
extern "C" NAKED register_t __cdecl internal_6bf2fa0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e004]
        mov dword ptr ds : [public_6c13d0c], eax
        ret 
        UNREACHABLE_TRAP(0x6bf2fa0)
    }
}
