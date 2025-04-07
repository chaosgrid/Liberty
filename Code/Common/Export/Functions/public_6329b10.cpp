#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6329b31 _public_6329b31

PROC_DECLARE(0x6329b10, internal_6329b10, public_6329b10);
extern "C" NAKED register_t __cdecl internal_6329b10()
{
    __asm
    {
        push esi
        push 8
        mov esi, ecx
        call public_6391d9c
        add esp, 4
        test eax, eax
        je public_6329b31
        mov cx, word ptr ds : [esi+4]
        mov dword ptr ds : [eax], offset public_63a442c
        mov word ptr ds : [eax+4], cx
        pop esi
        ret 
        public_6329b31 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6329b10)
    }
}

#undef public_6329b31
