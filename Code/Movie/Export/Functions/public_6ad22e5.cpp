#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad22e5);

PROC_DECLARE(0x6ad22e5, internal_6ad22e5, public_6ad22e5);
extern "C" NAKED register_t __cdecl internal_6ad22e5()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [public_6ada020]
        push dword ptr ds : [public_6add5c0]
        call esi
        push dword ptr ds : [public_6add5b0]
        call esi
        push dword ptr ds : [public_6add5a0]
        call esi
        push dword ptr ds : [public_6add580]
        call esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad22e5)
    }
}
