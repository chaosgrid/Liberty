#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8f100, internal_6d8f100, public_6d8f100);
extern "C" NAKED register_t __cdecl internal_6d8f100()
{
    __asm
    {
        mov word ptr ds : [public_6dbbd44], 0
        mov byte ptr ds : [public_6dbbd46], 1
        ret 
        UNREACHABLE_TRAP(0x6d8f100)
    }
}
