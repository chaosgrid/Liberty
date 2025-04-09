#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57bdd0);
CLANG_FORWARD_PROC_SYMBOL(public_57d330);

#define public_57bdee _public_57bdee

PROC_DECLARE(0x57bdd0, internal_57bdd0, public_57bdd0);
extern "C" NAKED register_t __cdecl internal_57bdd0()
{
    __asm
    {
        mov dl, byte ptr ds : [ecx+0x4F8]
        mov al, byte ptr ss : [esp+4]
        cmp al, dl
        setne dl
        test dl, dl
        mov byte ptr ds : [ecx+0x4F8], al
        je public_57bdee
        call public_57d330
        public_57bdee : nop
        ret 4
        UNREACHABLE_TRAP(0x57bdd0)
    }
}

#undef public_57bdee
