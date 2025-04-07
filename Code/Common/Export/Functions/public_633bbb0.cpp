#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633bbb0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_633bbcd _public_633bbcd
#define public_633bbd6 _public_633bbd6

PROC_DECLARE(0x633bbb0, internal_633bbb0, public_633bbb0);
extern "C" NAKED register_t __cdecl internal_633bbb0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        je public_633bbd6
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_633bbcd
        cmp cl, 0xFF
        je public_633bbcd
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_633bbd6
        public_633bbcd : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_633bbd6 : nop
        mov dword ptr ds : [esi+0x20], 0
        mov dword ptr ds : [esi+0x24], 0
        mov dword ptr ds : [esi+0x28], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x633bbb0)
    }
}

#undef public_633bbcd
#undef public_633bbd6
