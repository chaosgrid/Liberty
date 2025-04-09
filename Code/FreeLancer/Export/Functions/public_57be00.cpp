#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57be00);
CLANG_FORWARD_PROC_SYMBOL(public_57d330);

#define public_57be1e _public_57be1e

PROC_DECLARE(0x57be00, internal_57be00, public_57be00);
extern "C" NAKED register_t __cdecl internal_57be00()
{
    __asm
    {
        mov dl, byte ptr ds : [ecx+0x508]
        mov al, byte ptr ss : [esp+4]
        cmp al, dl
        setne dl
        test dl, dl
        mov byte ptr ds : [ecx+0x508], al
        je public_57be1e
        call public_57d330
        public_57be1e : nop
        ret 4
        UNREACHABLE_TRAP(0x57be00)
    }
}

#undef public_57be1e
