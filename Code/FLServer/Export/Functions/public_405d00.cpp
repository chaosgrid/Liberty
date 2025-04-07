#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405d00);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_405d1d _public_405d1d
#define public_405d26 _public_405d26

PROC_DECLARE(0x405d00, internal_405d00, public_405d00);
extern "C" NAKED register_t __cdecl internal_405d00()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_405d26
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_405d1d
        cmp cl, 0xFF
        je public_405d1d
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_405d26
        public_405d1d : nop
        push eax
        call public_418978
        add esp, 4
        public_405d26 : nop
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x405d00)
    }
}

#undef public_405d1d
#undef public_405d26
