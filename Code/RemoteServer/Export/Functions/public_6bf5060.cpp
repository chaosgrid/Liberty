#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf5060, internal_6bf5060, public_6bf5060);
extern "C" NAKED register_t __cdecl internal_6bf5060()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e0ac]
        mov dword ptr ds : [public_6c13d74], eax
        ret 
        UNREACHABLE_TRAP(0x6bf5060)
    }
}
