#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed36d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ed36ed _public_6ed36ed
#define public_6ed36f6 _public_6ed36f6

PROC_DECLARE(0x6ed36d0, internal_6ed36d0, public_6ed36d0);
extern "C" NAKED register_t __cdecl internal_6ed36d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_6ed36f6
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6ed36ed
        cmp cl, 0xFF
        je public_6ed36ed
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6ed36f6
        public_6ed36ed : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6ed36f6 : nop
        mov dword ptr ds : [esi+0x30], 0
        mov dword ptr ds : [esi+0x34], 0
        mov dword ptr ds : [esi+0x38], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ed36d0)
    }
}

#undef public_6ed36ed
#undef public_6ed36f6
