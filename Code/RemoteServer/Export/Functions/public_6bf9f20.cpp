#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf9f20, internal_6bf9f20, public_6bf9f20);
extern "C" NAKED register_t __cdecl internal_6bf9f20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e2ac]
        mov dword ptr ds : [public_6c13f2c], eax
        ret 
        UNREACHABLE_TRAP(0x6bf9f20)
    }
}
