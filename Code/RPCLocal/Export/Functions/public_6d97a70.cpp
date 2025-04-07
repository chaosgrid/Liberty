#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d97a70, internal_6d97a70, public_6d97a70);
extern "C" NAKED register_t __cdecl internal_6d97a70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3f58]
        mov dword ptr ds : [public_6dbbe84], eax
        ret 
        UNREACHABLE_TRAP(0x6d97a70)
    }
}
