#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3060);
CLANG_FORWARD_PROC_SYMBOL(public_6ad30ae);

PROC_DECLARE(0x6ad30ae, internal_6ad30ae, public_6ad30ae);
extern "C" NAKED register_t __cdecl internal_6ad30ae()
{
    __asm
    {
        fld st(0)
        fabs 
        fld tbyte ptr ds : [public_6addb9e]
        fcompp 
        wait 
        fnstsw word ptr ss : [ebp-0xA0]
        wait 
        test byte ptr ss : [ebp-0x9F], 0x41
        jne public_6ad3060
        fld st(0)
        frndint 
        ftst 
        wait 
        fnstsw word ptr ss : [ebp-0xA0]
        wait 
        mov dl, byte ptr ss : [ebp-0x9F]
        fxch 
        fsub st, st(1)
        ftst 
        wait 
        fnstsw word ptr ss : [ebp-0xA0]
        fabs 
        f2xm1 
        ret 
        UNREACHABLE_TRAP(0x6ad30ae)
    }
}
