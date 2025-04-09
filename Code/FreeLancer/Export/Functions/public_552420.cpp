#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_552420);
CLANG_FORWARD_PROC_SYMBOL(public_5b7030);

#define public_55242f _public_55242f

PROC_DECLARE(0x552420, internal_552420, public_552420);
extern "C" NAKED register_t __cdecl internal_552420()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        cmp eax, 0xA
        jl public_55242f
        cmp eax, 0xE
        jg public_55242f
        mov al, 1
        ret 
        public_55242f : nop
        push eax
        call public_5b7030
        mov al, byte ptr ds : [eax+0x48]
        add esp, 4
        ret 
        UNREACHABLE_TRAP(0x552420)
    }
}

#undef public_55242f
