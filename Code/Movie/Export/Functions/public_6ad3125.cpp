#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3156);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3319);
CLANG_FORWARD_PROC_SYMBOL(public_6ad351c);

PROC_DECLARE(0x6ad3125, internal_6ad3125, public_6ad3125);
extern "C" NAKED register_t __cdecl internal_6ad3125()
{
    __asm
    {
        push esi
        sub esp, 0x74
        mov esi, esp
        push esi
        sub esp, 8
        fstp qword ptr ss : [esp]
        sub esp, 8
        fstp qword ptr ss : [esp]
        wait 
        fnsave ds:[esi+8]
        call public_6ad351c
        add esp, 0x14
        frstor ds:[esi+8]
        fld qword ptr ds : [esi]
        add esp, 0x74
        pop esi
        test eax, eax
        je public_6ad3156
        jmp public_6ad3319
        UNREACHABLE_TRAP(0x6ad3125)
    }
}
