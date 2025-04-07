#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d81040, internal_6d81040, public_6d81040);
extern "C" NAKED register_t __cdecl internal_6d81040()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_6db3250
        ret 4
        UNREACHABLE_TRAP(0x6d81040)
    }
}
