#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d91180, internal_6d91180, public_6d91180);
extern "C" NAKED register_t __cdecl internal_6d91180()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3cc4]
        mov dword ptr ds : [public_6dbbd9c], eax
        ret 
        UNREACHABLE_TRAP(0x6d91180)
    }
}
