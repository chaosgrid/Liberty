#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d90980, internal_6d90980, public_6d90980);
extern "C" NAKED register_t __cdecl internal_6d90980()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3ca4]
        mov dword ptr ds : [public_6dbbd8c], eax
        ret 
        UNREACHABLE_TRAP(0x6d90980)
    }
}
