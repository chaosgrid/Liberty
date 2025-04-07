#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da60f0, internal_6da60f0, public_6da60f0);
extern "C" NAKED register_t __cdecl internal_6da60f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db618c]
        mov dword ptr ds : [public_6dbbffc], eax
        ret 
        UNREACHABLE_TRAP(0x6da60f0)
    }
}
