#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712610);

PROC_DECLARE(0x6712610, internal_6712610, public_6712610);
extern "C" NAKED register_t __cdecl internal_6712610()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx], al
        ret 4
        UNREACHABLE_TRAP(0x6712610)
    }
}
