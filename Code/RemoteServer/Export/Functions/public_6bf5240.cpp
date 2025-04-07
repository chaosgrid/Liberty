#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf5240, internal_6bf5240, public_6bf5240);
extern "C" NAKED register_t __cdecl internal_6bf5240()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e0b8]
        mov dword ptr ds : [public_6c13d8c], eax
        ret 
        UNREACHABLE_TRAP(0x6bf5240)
    }
}
