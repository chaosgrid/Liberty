#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63289f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6328a13 _public_6328a13
#define public_6328a1f _public_6328a1f

PROC_DECLARE(0x63289f0, internal_63289f0, public_63289f0);
extern "C" NAKED register_t __cdecl internal_63289f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_63a3fec
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_6328a1f
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6328a13
        cmp cl, 0xFF
        je public_6328a13
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6328a1f
        public_6328a13 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6391d5a
        add esp, 4
        public_6328a1f : nop
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [esi], offset public_63a3e54
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63289f0)
    }
}

#undef public_6328a13
#undef public_6328a1f
