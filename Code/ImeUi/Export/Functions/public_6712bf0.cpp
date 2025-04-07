#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712bf0);

PROC_DECLARE(0x6712bf0, internal_6712bf0, public_6712bf0);
extern "C" NAKED register_t __cdecl internal_6712bf0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x8C]
        test al, al
        sete al
        mov byte ptr ds : [ecx+0x8C], al
        ret 
        UNREACHABLE_TRAP(0x6712bf0)
    }
}
