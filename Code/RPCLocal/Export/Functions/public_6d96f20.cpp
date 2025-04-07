#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d96f20, internal_6d96f20, public_6d96f20);
extern "C" NAKED register_t __cdecl internal_6d96f20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3ed8]
        mov dword ptr ds : [public_6dbbe44], eax
        ret 
        UNREACHABLE_TRAP(0x6d96f20)
    }
}
