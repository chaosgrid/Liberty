#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb4470);
CLANG_FORWARD_PROC_SYMBOL(public_6eb4680);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eb4482 _public_6eb4482
#define public_6eb4499 _public_6eb4499

PROC_DECLARE(0x6eb4470, internal_6eb4470, public_6eb4470);
extern "C" NAKED register_t __cdecl internal_6eb4470()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [public_6fcef28]
        push edi
        mov edi, dword ptr ds : [public_6fcef2c]
        cmp esi, edi
        je public_6eb4499
        public_6eb4482 : nop
        mov ecx, esi
        call public_6eb4680
        add esi, 0x80
        cmp esi, edi
        jne public_6eb4482
        mov esi, dword ptr ds : [public_6fcef28]
        public_6eb4499 : nop
        push esi
        call public_6fa8fe0
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_6fcef28], eax
        mov dword ptr ds : [public_6fcef2c], eax
        mov dword ptr ds : [public_6fcef30], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6eb4470)
    }
}

#undef public_6eb4482
#undef public_6eb4499
