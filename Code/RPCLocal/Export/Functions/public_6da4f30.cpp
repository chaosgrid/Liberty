#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da4f30, internal_6da4f30, public_6da4f30);
extern "C" NAKED register_t __cdecl internal_6da4f30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6104]
        mov dword ptr ds : [public_6dbbf90], eax
        ret 
        UNREACHABLE_TRAP(0x6da4f30)
    }
}
