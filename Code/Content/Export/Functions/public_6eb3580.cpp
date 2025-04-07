#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eab740);
CLANG_FORWARD_PROC_SYMBOL(public_6eb3580);

#define public_6eb3590 _public_6eb3590
#define public_6eb359e _public_6eb359e

PROC_DECLARE(0x6eb3580, internal_6eb3580, public_6eb3580);
extern "C" NAKED register_t __cdecl internal_6eb3580()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_6eb359e
        mov edi, edi
        public_6eb3590 : nop
        mov ecx, esi
        call public_6eab740
        add esi, 0x28
        cmp esi, edi
        jne public_6eb3590
        public_6eb359e : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6eb3580)
    }
}

#undef public_6eb3590
#undef public_6eb359e
