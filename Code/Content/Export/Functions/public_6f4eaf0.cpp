#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4eaf0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f4eb0d _public_6f4eb0d
#define public_6f4eb19 _public_6f4eb19
#define public_6f4eb3e _public_6f4eb3e

PROC_DECLARE(0x6f4eaf0, internal_6f4eaf0, public_6f4eaf0);
extern "C" NAKED register_t __cdecl internal_6f4eaf0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6f4eb19
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6f4eb0d
        cmp cl, 0xFF
        je public_6f4eb0d
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6f4eb19
        public_6f4eb0d : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f4eb19 : nop
        test byte ptr ss : [esp+8], 1
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        je public_6f4eb3e
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f4eb3e : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f4eaf0)
    }
}

#undef public_6f4eb0d
#undef public_6f4eb19
#undef public_6f4eb3e
