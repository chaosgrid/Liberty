#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4cf10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f4cf2d _public_6f4cf2d
#define public_6f4cf39 _public_6f4cf39

PROC_DECLARE(0x6f4cf10, internal_6f4cf10, public_6f4cf10);
extern "C" NAKED register_t __cdecl internal_6f4cf10()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6f4cf39
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6f4cf2d
        cmp cl, 0xFF
        je public_6f4cf2d
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6f4cf39
        public_6f4cf2d : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f4cf39 : nop
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4cf10)
    }
}

#undef public_6f4cf2d
#undef public_6f4cf39
