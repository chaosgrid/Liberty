#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285d10);
CLANG_FORWARD_PROC_SYMBOL(public_629b0c0);

#define public_629b0d7 _public_629b0d7

PROC_DECLARE(0x629b0c0, internal_629b0c0, public_629b0c0);
extern "C" NAKED register_t __cdecl internal_629b0c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x10]
        test al, al
        je public_629b0d7
        push esi
        mov byte ptr ds : [esi+0x10], 0
        call public_6285d10
        add esp, 4
        public_629b0d7 : nop
        mov al, byte ptr ds : [esi+0x10]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x629b0c0)
    }
}

#undef public_629b0d7
