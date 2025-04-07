#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6315710);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_631572d _public_631572d
#define public_6315736 _public_6315736

PROC_DECLARE(0x6315710, internal_6315710, public_6315710);
extern "C" NAKED register_t __cdecl internal_6315710()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_6315736
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_631572d
        cmp cl, 0xFF
        je public_631572d
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6315736
        public_631572d : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_6315736 : nop
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        mov dword ptr ds : [esi+0x10], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6315710)
    }
}

#undef public_631572d
#undef public_6315736
