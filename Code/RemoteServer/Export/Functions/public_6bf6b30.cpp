#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf6b30, internal_6bf6b30, public_6bf6b30);
extern "C" NAKED register_t __cdecl internal_6bf6b30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e158]
        mov dword ptr ds : [public_6c13e2c], eax
        ret 
        UNREACHABLE_TRAP(0x6bf6b30)
    }
}
