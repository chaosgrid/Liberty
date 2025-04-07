#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf9c90, internal_6bf9c90, public_6bf9c90);
extern "C" NAKED register_t __cdecl internal_6bf9c90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e28c]
        mov dword ptr ds : [public_6c13f0c], eax
        ret 
        UNREACHABLE_TRAP(0x6bf9c90)
    }
}
