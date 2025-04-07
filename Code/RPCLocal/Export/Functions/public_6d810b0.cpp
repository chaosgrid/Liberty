#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d810b0, internal_6d810b0, public_6d810b0);
extern "C" NAKED register_t __cdecl internal_6d810b0()
{
    __asm
    {
        mov word ptr ds : [public_6dbba20], 2
        mov byte ptr ds : [public_6dbba22], 1
        ret 
        UNREACHABLE_TRAP(0x6d810b0)
    }
}
