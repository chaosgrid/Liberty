#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da7f70, internal_6da7f70, public_6da7f70);
extern "C" NAKED register_t __cdecl internal_6da7f70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6228]
        mov dword ptr ds : [public_6dbc0d0], eax
        ret 
        UNREACHABLE_TRAP(0x6da7f70)
    }
}
