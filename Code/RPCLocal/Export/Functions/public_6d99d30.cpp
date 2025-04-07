#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d99d30, internal_6d99d30, public_6d99d30);
extern "C" NAKED register_t __cdecl internal_6d99d30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db4050]
        mov dword ptr ds : [public_6dbbedc], eax
        ret 
        UNREACHABLE_TRAP(0x6d99d30)
    }
}
