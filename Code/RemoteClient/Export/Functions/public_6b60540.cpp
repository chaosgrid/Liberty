#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b60540, internal_6b60540, public_6b60540);
extern "C" NAKED register_t __cdecl internal_6b60540()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e7dc]
        mov dword ptr ds : [public_6b74384], eax
        ret 
        UNREACHABLE_TRAP(0x6b60540)
    }
}
