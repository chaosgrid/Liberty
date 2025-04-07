#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d96f30, internal_6d96f30, public_6d96f30);
extern "C" NAKED register_t __cdecl internal_6d96f30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3edc]
        mov dword ptr ds : [public_6dbbe3c], eax
        ret 
        UNREACHABLE_TRAP(0x6d96f30)
    }
}
