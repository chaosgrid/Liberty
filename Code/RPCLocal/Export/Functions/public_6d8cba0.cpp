#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8cba0, internal_6d8cba0, public_6d8cba0);
extern "C" NAKED register_t __cdecl internal_6d8cba0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3948]
        mov dword ptr ds : [public_6dbbb98], eax
        ret 
        UNREACHABLE_TRAP(0x6d8cba0)
    }
}
