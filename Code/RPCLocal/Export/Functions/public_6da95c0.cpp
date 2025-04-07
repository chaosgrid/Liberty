#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da95c0, internal_6da95c0, public_6da95c0);
extern "C" NAKED register_t __cdecl internal_6da95c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db62ec]
        mov dword ptr ds : [public_6dbc16c], eax
        ret 
        UNREACHABLE_TRAP(0x6da95c0)
    }
}
