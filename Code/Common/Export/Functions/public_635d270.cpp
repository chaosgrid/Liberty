#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6352480);
CLANG_FORWARD_PROC_SYMBOL(public_635c310);
CLANG_FORWARD_PROC_SYMBOL(public_635d270);
CLANG_FORWARD_PROC_SYMBOL(public_6369200);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_635d282 _public_635d282
#define public_635d28f _public_635d28f
#define public_635d2a0 _public_635d2a0
#define public_635d2cf _public_635d2cf

PROC_DECLARE(0x635d270, internal_635d270, public_635d270);
extern "C" NAKED register_t __cdecl internal_635d270()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp word ptr ds : [esi+0x22], 0
        je public_635d282
        xor eax, eax
        pop esi
        ret 4
        public_635d282 : nop
        cmp word ptr ds : [esi+0x1A], 0
        je public_635d28f
        xor eax, eax
        pop esi
        ret 4
        public_635d28f : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        jne public_635d2a0
        mov dword ptr ds : [ecx+0x178], 0
        public_635d2a0 : nop
        push edi
        mov edi, dword ptr ds : [ecx+0x170]
        push esi
        mov ecx, edi
        call public_6369200
        push eax
        push esi
        mov ecx, edi
        call public_6352480
        test esi, esi
        mov edi, dword ptr ds : [esi+0x14]
        je public_635d2cf
        mov ecx, esi
        call public_635c310
        push esi
        call public_6391d5a
        add esp, 4
        public_635d2cf : nop
        mov eax, edi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x635d270)
    }
}

#undef public_635d282
#undef public_635d28f
#undef public_635d2a0
#undef public_635d2cf
