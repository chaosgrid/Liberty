#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce36f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6ce370d _public_6ce370d
#define public_6ce3719 _public_6ce3719

PROC_DECLARE(0x6ce36f0, internal_6ce36f0, public_6ce36f0);
extern "C" NAKED register_t __cdecl internal_6ce36f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6ce3719
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6ce370d
        cmp cl, 0xFF
        je public_6ce370d
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6ce3719
        public_6ce370d : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6ce3719 : nop
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ce36f0)
    }
}

#undef public_6ce370d
#undef public_6ce3719
