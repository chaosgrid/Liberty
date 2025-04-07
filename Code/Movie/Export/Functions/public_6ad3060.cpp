#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3060);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3082);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3083);

PROC_DECLARE(0x6ad3060, internal_6ad3060, public_6ad3060);
/* CHUNK of public_6ad30ae */
extern "C" NAKED register_t __cdecl internal_6ad3060()
{
    __asm
    {
        pop eax
        ftst 
        wait 
        fnstsw word ptr ss : [ebp-0xA0]
        wait 
        test byte ptr ss : [ebp-0x9F], 1
        jne public_6ad3083
        fstp st(0)
        fld tbyte ptr ds : [public_6addb80]
        or ch, ch
        je public_6ad3082
        fchs 
        UNREACHABLE_TRAP(0x6ad3060)
    }
}
