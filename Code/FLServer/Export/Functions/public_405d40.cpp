#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405d40);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_405d5d _public_405d5d
#define public_405d69 _public_405d69

PROC_DECLARE(0x405d40, internal_405d40, public_405d40);
extern "C" NAKED register_t __cdecl internal_405d40()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_405d69
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_405d5d
        cmp cl, 0xFF
        je public_405d5d
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_405d69
        public_405d5d : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_418978
        add esp, 4
        public_405d69 : nop
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x405d40)
    }
}

#undef public_405d5d
#undef public_405d69
