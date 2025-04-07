#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8edc0, internal_6d8edc0, public_6d8edc0);
extern "C" NAKED register_t __cdecl internal_6d8edc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3964]
        mov dword ptr ds : [public_6dbbd04], eax
        ret 
        UNREACHABLE_TRAP(0x6d8edc0)
    }
}
