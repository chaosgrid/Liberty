#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf5610, internal_6bf5610, public_6bf5610);
extern "C" NAKED register_t __cdecl internal_6bf5610()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e0d8]
        mov dword ptr ds : [public_6c13da8], eax
        ret 
        UNREACHABLE_TRAP(0x6bf5610)
    }
}
