#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf9f30, internal_6bf9f30, public_6bf9f30);
extern "C" NAKED register_t __cdecl internal_6bf9f30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e2b0]
        mov dword ptr ds : [public_6c13f24], eax
        ret 
        UNREACHABLE_TRAP(0x6bf9f30)
    }
}
