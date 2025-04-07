#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da8210, internal_6da8210, public_6da8210);
extern "C" NAKED register_t __cdecl internal_6da8210()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6248]
        mov dword ptr ds : [public_6dbc0f0], eax
        ret 
        UNREACHABLE_TRAP(0x6da8210)
    }
}
