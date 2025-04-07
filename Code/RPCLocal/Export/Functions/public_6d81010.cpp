#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d81010, internal_6d81010, public_6d81010);
extern "C" NAKED register_t __cdecl internal_6d81010()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3240]
        mov dword ptr ds : [public_6dbb908], eax
        ret 
        UNREACHABLE_TRAP(0x6d81010)
    }
}
