#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8f120, internal_6d8f120, public_6d8f120);
extern "C" NAKED register_t __cdecl internal_6d8f120()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_6dbbd40], ax
        mov byte ptr ds : [public_6dbbd42], al
        ret 
        UNREACHABLE_TRAP(0x6d8f120)
    }
}
