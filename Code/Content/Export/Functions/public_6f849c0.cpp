#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed6710);

#define public_6f849dd _public_6f849dd

PROC_DECLARE(0x6f849c0, internal_6f849c0, public_6f849c0);
extern "C" NAKED register_t __cdecl internal_6f849c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ed6710
        test al, al
        je public_6f849dd
        mov al, byte ptr ds : [esi+0x8C]
        test al, al
        je public_6f849dd
        mov eax, 1
        pop esi
        ret 
        public_6f849dd : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f849c0)
    }
}

#undef public_6f849dd
