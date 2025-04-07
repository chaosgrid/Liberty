#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b670);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d1b68d _public_6d1b68d
#define public_6d1b699 _public_6d1b699
#define public_6d1b6be _public_6d1b6be

PROC_DECLARE(0x6d1b670, internal_6d1b670, public_6d1b670);
extern "C" NAKED register_t __cdecl internal_6d1b670()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6d1b699
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6d1b68d
        cmp cl, 0xFF
        je public_6d1b68d
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6d1b699
        public_6d1b68d : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d1b699 : nop
        test byte ptr ss : [esp+8], 1
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        je public_6d1b6be
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6d1b6be : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d1b670)
    }
}

#undef public_6d1b68d
#undef public_6d1b699
#undef public_6d1b6be
